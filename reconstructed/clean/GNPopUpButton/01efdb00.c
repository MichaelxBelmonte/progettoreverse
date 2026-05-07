// Function: FUN_01efdb00
// Address: 01efdb00
// Size: 602 bytes
// Class: GNPopUpButton

void FUN_01efdb00(void)

{
  bool bVar1;
  code *pcVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t lVar7;
  int64_t local_40;
  char local_38;
  
  pcVar2 = g_026b2b70;
  lVar3 = *arg1;
  if (0 < *(int *)(lVar3 + 0xc)) {
    lVar6 = 0;
    do {
      lVar3 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar6 * 8);
      if (lVar3 == 0) {
        lVar7 = 0;
      }
      else {
        FUN_00d50b00();
        lVar7 = lVar3;
      }
      FUN_01f01c90();
      if (local_40 == 0) {
        lVar5 = 0;
        bVar1 = false;
      }
      else {
        lVar5 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          bVar1 = true;
        }
        else {
          local_38 = '\0';
          bVar1 = true;
        }
      }
      if (lVar5 == 0) {
        plVar4 = (int64_t *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar4 = (int64_t)&g_026b2b58;
        plVar4[2] = 0;
        plVar4[3] = 0;
        plVar4[4] = 0;
        (*pcVar2)();
        (**(code **)(*plVar4 + 0x368))();
        (**(code **)(*plVar4 + 0x378))();
        FUN_01f01a30();
        bVar1 = true;
      }
      (**(code **)(*this_ptr + 0x648))();
      if ((lVar3 != 0) && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      if (bVar1) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
      lVar3 = *arg1;
    } while (lVar6 < *(int *)(lVar3 + 0xc));
  }
  (**(code **)(*this_ptr + 0x448))();
  (**(code **)(*this_ptr + 0x658))();
  (**(code **)(*this_ptr + 0x628))();
  return;
}

