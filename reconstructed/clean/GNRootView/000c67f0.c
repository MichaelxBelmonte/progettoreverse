// Function: FUN_000c67f0
// Address: 000c67f0
// Size: 536 bytes
// Class: GNRootView

uint64_t FUN_000c67f0(uint64_t param_1,int64_t *param_2,void*param_3,void*param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  void* pVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t this_ptr;
  int64_t lVar9;
  void*local_res8;
  char *local_res10;
  int64_t *local_res18;
  int64_t local_40;
  char local_38;
  
  plVar1 = *(int64_t **)(this_ptr + 0x158);
  (**(code **)(*plVar1 + 0x368))();
  uVar8 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
  if (*(int64_t *)(this_ptr + 0x168) != 0) {
    lVar2 = *(int64_t *)(*(int64_t *)(this_ptr + 0x168) + 0x10);
    iVar4 = *(int *)(lVar2 + 0xc);
    if (0 < iVar4) {
      lVar9 = 0;
      do {
        lVar7 = *(int64_t *)(lVar2 + 0x10);
        if (*(int64_t *)(*(int64_t *)(lVar7 + lVar9 * 8) + 0x308) == 0) {
          FUN_0051b4f0();
          pVar6 = (void*)lVar7;
          lVar7 = *param_2;
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 == lVar7) {
            FUN_00d50b00();
            if (*local_res10 == '\0') {
              cVar3 = FUN_0052f210();
              *local_res10 = cVar3;
            }
            *param_3 = 1;
            *param_4 = 0;
            *local_res8 = 0;
            pvVar5 = _pthread_getspecific(pVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e7fb0();
            lVar2 = *local_res18;
            if (lVar2 == local_40) {
              if (((char)local_res18[1] == '\0') && (local_40 != 0)) {
                if (local_38 != '\0') goto LAB_000c6985;
                FUN_00d50b00();
                goto LAB_000c69c1;
              }
LAB_000c69c5:
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              lVar9 = local_res18[1];
              if (local_38 == '\0') {
                if (local_40 != 0) {
                  FUN_00d50b00();
                }
                *local_res18 = local_40;
                if (((char)lVar9 != '\0') && (lVar2 != 0)) {
                  FUN_00d50b20();
                }
LAB_000c69c1:
                *(void*)(local_res18 + 1) = 1;
                goto LAB_000c69c5;
              }
              *local_res18 = local_40;
              if (((char)lVar9 != '\0') && (lVar2 != 0)) {
                FUN_00d50b20();
              }
LAB_000c6985:
              *(void*)(local_res18 + 1) = 1;
            }
            uVar8 = 0;
            goto LAB_000c69de;
          }
          iVar4 = *(int *)(lVar2 + 0xc);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar4);
      uVar8 = CONCAT71((int7)((uint64_t)local_res10 >> 8),1);
    }
  }
LAB_000c69de:
  (**(code **)(*plVar1 + 0x378))();
  if ((char)uVar8 == '\0') {
    FUN_00d50b20();
  }
  return (uVar8 ^ 1) & 0xffffffff;
}

