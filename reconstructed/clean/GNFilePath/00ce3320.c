// Function: FUN_00ce3320
// Address: 00ce3320
// Size: 628 bytes
// Class: GNFilePath

uint64_t FUN_00ce3320(void)

{
  int64_t *plVar1;
  uint64_t uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  void*puVar6;
  uint64_t uVar7;
  int64_t *this_ptr;
  uint64_t unaff_R15;
  
  cVar3 = (**(code **)(*this_ptr + 0x3a0))();
  uVar7 = CONCAT71((int7)((uint64_t)unaff_R15 >> 8),1);
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*this_ptr + 0x398))();
    if (cVar3 == '\0') {
      FUN_00d50b00();
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_02572358;
      (*g_02572370)();
      do {
        FUN_00d21140();
        (**(code **)(*this_ptr + 0x368))();
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d8ee20();
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        iVar4 = FUN_00d8c7a0();
        iVar5 = FUN_00d8c7a0();
        if (iVar4 == iVar5) {
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b20();
            FUN_00d50b20();
          }
          uVar7 = 0;
          if (puVar6 == (void*)0x0) goto LAB_00ce35a0;
          goto LAB_00ce359b;
        }
        FUN_00cddf30();
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
        cVar3 = (**(code **)(*this_ptr + 0x3a0))();
      } while (cVar3 == '\0');
      uVar7 = (uint64_t)*(uint *)((int64_t)puVar6 + 0xc);
      do {
        iVar4 = (int)uVar7;
        uVar2 = uVar7 >> 8;
        if (iVar4 < 1) break;
        plVar1 = *(int64_t **)(puVar6[2] + -8 + uVar7 * 8);
        if (this_ptr != plVar1) {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          this_ptr = plVar1;
        }
        cVar3 = (**(code **)(*this_ptr + 0x420))();
        uVar7 = uVar7 - 1;
      } while (cVar3 != '\0');
      uVar7 = CONCAT71((int7)uVar2,iVar4 < 1) & 0xffffffff;
      if (puVar6 != (void*)0x0) {
LAB_00ce359b:
        FUN_00d50b20();
      }
LAB_00ce35a0:
      FUN_00d50b20();
    }
    else {
      uVar7 = 0;
    }
  }
  return uVar7 & 0xffffffff;
}

