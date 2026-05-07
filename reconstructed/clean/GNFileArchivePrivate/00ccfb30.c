// Function: FUN_00ccfb30
// Address: 00ccfb30
// Size: 563 bytes
// Class: GNFileArchivePrivate

void FUN_00ccfb30(code *param_1,int param_2)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t *arg1;
  void*this_ptr;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t local_60;
  char local_58;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  lVar4 = *arg1;
  if (*(int *)(lVar4 + 0x1c) != 0) {
    if (param_1 == 0x0) {
      lVar6 = 0x20;
      uVar5 = 0;
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(lVar4 + 0x20) + 0x10);
        if ((*(int64_t *)(lVar1 + -0x18 + lVar6) != 0) && (*(int *)(lVar1 + lVar6) == param_2)) {
          FUN_00cd0ea0(lVar4,(int)uVar5 + 1);
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          FUN_00d21140();
          if (local_60 != 0) {
            FUN_00d50b20();
          }
          lVar4 = *arg1;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x23c;
      } while (uVar5 < *(uint *)(lVar4 + 0x1c));
    }
    else {
      lVar6 = 0;
      uVar5 = 0;
      do {
        lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x20) + 0x10);
        if (((*(int64_t *)(lVar4 + 8 + lVar6) != 0) && (*(int *)(lVar4 + 0x20 + lVar6) == param_2))
           && (cVar2 = (*param_1)(), cVar2 != '\0')) {
          FUN_00cd0ea0();
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          FUN_00d21140();
          if (local_60 != 0) {
            FUN_00d50b20();
          }
        }
        uVar5 = uVar5 + 1;
        lVar4 = *arg1;
        lVar6 = lVar6 + 0x23c;
      } while (uVar5 < *(uint *)(lVar4 + 0x1c));
    }
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

