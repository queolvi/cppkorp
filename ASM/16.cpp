struct TreeNode {
    int value;            // Значение узла
    TreeNode* left;      // Указатель на левое поддерево
    TreeNode* right;     // Указатель на правое поддерево
};

bool foo(TreeNode* a, TreeNode* b) {
    if (a == nullptr && b == nullptr) {
        return true; // Оба узла пустые
    }
    if (a == nullptr || b == nullptr) {
        return false; // Один из узлов пустой
    }
    
    if (a->value != b->value) {
        return false; // Значения узлов не равны
    }

    // Рекурсивно проверяем левое и правое поддеревья
    return foo(a->left, b->right) && foo(a->right, b->left);
}

bool bar(TreeNode* node) {
    if (node == nullptr) {
        return true; // Пустое поддерево считается симметричным
    }

    // Проверяем узел с его дочерними узлами
    return foo(node->left, node->right);
}

