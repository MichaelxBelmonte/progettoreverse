// Function: FUN_01dd5240
// Address: 01dd5240
// Size: 694 bytes
// Class: GNControl
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


void* FUN_01dd5240(void)

{
  int iVar1;
  int64_t *plVar2;
  bool bVar3;
  bool bVar4;
  void*puVar5;
  int iVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  bool bVar10;
  int64_t local_50;
  char local_48;
  
  FUN_01dd4960();
  if (local_50 == 0) {
    bVar3 = true;
  }
  else {
    if (local_48 == '\0') {
      FUN_00d50b00();
    }
    if ((6 < *(int *)(local_50 + 0x18) + 3U) && (*(int64_t *)(arg1 + 0x1f8) != 0)) {
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &g_02572358;
      (*g_02572370)();
      if (*(int *)(local_50 + 0x18) < 4) {
        lVar7 = 0;
        bVar4 = false;
      }
      else {
        lVar9 = 0;
        bVar4 = false;
        lVar8 = 0;
        do {
          plVar2 = *(int64_t **)(arg1 + 0x1f8);
          FUN_00d50b00();
          (**(code **)(*plVar2 + 0x40))
                    (*(void*)(*(int64_t *)(local_50 + 0x10) + lVar9 * 4),
                     &stack0xffffffffffffff98);
          if (local_50 == lVar8) {
            lVar7 = lVar8;
            if ((!bVar4) && (local_50 != 0)) {
              if (local_48 == '\0') {
                FUN_00d50b00();
LAB_01dd5400:
                bVar10 = local_48 != '\0';
                goto joined_r0x01dd5404;
              }
              goto LAB_01dd5394;
            }
            bVar3 = bVar4;
            if (local_48 != '\0') {
LAB_01dd540a:
              lVar7 = lVar8;
              bVar3 = bVar4;
              if (local_50 != 0) {
                FUN_00d50b20();
              }
            }
          }
          else {
            lVar7 = local_50;
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
              bVar3 = true;
              if (bVar4) {
                if (lVar8 != 0) {
                  FUN_00d50b20();
                  lVar8 = local_50;
                  goto LAB_01dd5400;
                }
                bVar10 = false;
                lVar8 = local_50;
joined_r0x01dd5404:
                bVar4 = true;
                lVar7 = lVar8;
                bVar3 = bVar4;
                if (bVar10) goto LAB_01dd540a;
              }
            }
            else {
              if ((bVar4) && (lVar8 != 0)) {
                FUN_00d50b20();
              }
LAB_01dd5394:
              local_48 = '\0';
              bVar3 = true;
            }
          }
          bVar4 = bVar3;
          if (arg1 != 0) {
            FUN_00d50b20();
          }
          if (lVar7 != 0) {
            FUN_00d21140();
          }
          lVar9 = lVar9 + 1;
          iVar1 = *(int *)(local_50 + 0x18);
          iVar6 = iVar1 + 3;
          if (-1 < iVar1) {
            iVar6 = iVar1;
          }
          lVar8 = lVar7;
        } while (lVar9 < iVar6 >> 2);
      }
      *this_ptr = puVar5;
      *(void*)(this_ptr + 1) = 1;
      bVar3 = false;
      if ((bVar4) && (lVar7 != 0)) {
        FUN_00d50b20();
        bVar3 = false;
      }
      goto LAB_01dd54b5;
    }
    bVar3 = false;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_01dd54b5:
  if (!bVar3) {
    FUN_00d50b20();
  }
  return this_ptr;
}

