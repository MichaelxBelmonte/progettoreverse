// Function: FUN_000e2470
// Address: 000e2470
// Size: 513 bytes
// Class: Unknown

int64_t * FUN_000e2470(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t local_68;
  char local_60;
  
  plVar1 = *(int64_t **)(arg1 + 0x158);
  (**(code **)(*plVar1 + 0x368))();
  if ((*(int64_t *)(arg1 + 0x168) == 0) ||
     (lVar2 = *(int64_t *)(*(int64_t *)(arg1 + 0x168) + 0x10), *(int *)(lVar2 + 0xc) < 1)) {
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    lVar7 = 0;
    bVar4 = false;
    plVar8 = (int64_t *)0x0;
    do {
      plVar3 = *(int64_t **)(*(int64_t *)(lVar2 + 0x10) + lVar7 * 8);
      cVar6 = FUN_00518a70();
      plVar9 = plVar8;
      bVar5 = bVar4;
      if (cVar6 != '\0') {
        FUN_00537d80();
        cVar6 = FUN_00d24090();
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (cVar6 != '\0') {
          cVar6 = FUN_00bd22a0();
          if (cVar6 == '\0') {
            *(void*)(this_ptr + 1) = 0;
            if (plVar3 != (int64_t *)0x0) goto LAB_000e2646;
          }
          else {
            cVar6 = (**(code **)(*plVar3 + 0x390))();
            if (cVar6 == '\0') {
              if (plVar8 == plVar3) {
                if (!bVar4) {
                  FUN_00d50b00();
                  bVar5 = true;
                }
              }
              else {
                FUN_00d50b00();
                bVar5 = true;
                plVar9 = plVar3;
                if ((bVar4) && (plVar8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              goto LAB_000e24e0;
            }
            *(void*)(this_ptr + 1) = 0;
LAB_000e2646:
            FUN_00d50b00();
          }
          *this_ptr = (int64_t)plVar3;
          *(void*)(this_ptr + 1) = 1;
          if ((bVar4) && (plVar8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_000e260d;
        }
      }
LAB_000e24e0:
      bVar4 = bVar5;
      lVar7 = lVar7 + 1;
      plVar8 = plVar9;
    } while (lVar7 < *(int *)(lVar2 + 0xc));
    *(void*)(this_ptr + 1) = 0;
    if (bVar4) goto LAB_000e2603;
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_000e2603;
    }
  }
  plVar9 = (int64_t *)0x0;
LAB_000e2603:
  *this_ptr = (int64_t)plVar9;
  *(void*)(this_ptr + 1) = 1;
LAB_000e260d:
  (**(code **)(*plVar1 + 0x378))();
  return this_ptr;
}

