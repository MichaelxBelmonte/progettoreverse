// Function: FUN_00e474c0
// Address: 00e474c0
// Size: 977 bytes
// Class: GNBKVA

void FUN_00e474c0(void)

{
  int64_t lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int iVar9;
  int64_t lVar10;
  int64_t this_ptr;
  int64_t lVar11;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  int64_t local_50;
  uint32_t local_44;
  int64_t local_40;
  char local_38;
  
  if ((*(int64_t *)(this_ptr + 0x90) != 0) &&
     (lVar1 = *(int64_t *)(*(int64_t *)(this_ptr + 0x90) + 0x10), 0 < *(int *)(lVar1 + 0xc))) {
    lVar8 = 0;
    do {
      lVar11 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar8 * 8);
      local_70 = '\0';
      local_78 = lVar11;
      uVar7 = FUN_00e47ad0(lVar1,&local_78);
      lVar10 = local_40;
      if (local_40 == 0) {
        local_44 = (uint32_t)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
        lVar10 = 0;
      }
      else {
        if (local_38 == '\0') {
          FUN_00d50b00();
          local_44 = 0;
          if ((local_38 == '\0') || (local_40 == 0)) goto LAB_00e4759a;
          FUN_00d50b20();
        }
        else {
          local_38 = '\0';
        }
        local_44 = 0;
      }
LAB_00e4759a:
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (lVar10 != 0) {
        FUN_00d79bf0();
        iVar3 = FUN_00d795b0();
        if (iVar3 != 0) {
          local_60 = '\0';
          local_68 = lVar11;
          local_50 = lVar10;
          FUN_00e47c30();
          local_58 = local_40;
          if (local_38 == '\0') {
            if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 == 0) || (iVar5 = iVar3, iVar3 < 1)) {
LAB_00e4771e:
            FUN_00d796b0();
            lVar11 = local_40;
            if (((local_38 == '\0') && (local_40 != 0)) &&
               ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
              FUN_00d50b20();
            }
            iVar5 = FUN_00e5d230();
            if (iVar3 < 2) {
              iVar9 = 1;
LAB_00e4780e:
              iVar6 = iVar9;
              if (iVar9 != iVar3 + -1) goto LAB_00e47883;
            }
            else {
              iVar9 = 1;
              lVar10 = lVar11;
              do {
                FUN_00d79670();
                lVar11 = local_40;
                if (local_40 == lVar10) {
LAB_00e477bd:
                  lVar11 = lVar10;
                  if (local_38 != '\0') {
LAB_00e477c3:
                    if (local_40 != 0) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  if (local_38 == '\0') {
                    if (local_40 != 0) {
                      FUN_00d50b00();
                    }
                    if (lVar10 != 0) {
                      FUN_00d50b20();
                      lVar10 = lVar11;
                      goto LAB_00e477bd;
                    }
                    if (local_38 == '\0') goto LAB_00e477e0;
                    goto LAB_00e477c3;
                  }
                  if (lVar10 != 0) {
                    FUN_00d50b20();
                  }
                }
LAB_00e477e0:
                iVar6 = FUN_00e5d230();
                if (iVar6 != iVar5) goto LAB_00e4780e;
                iVar9 = iVar9 + 1;
                lVar10 = lVar11;
                iVar6 = iVar3;
              } while (iVar3 != iVar9);
LAB_00e47883:
              iVar3 = (iVar3 - iVar6) + 1;
              while (iVar3 = iVar3 + -1, 0 < iVar3) {
                FUN_00d79770();
              }
            }
            if (lVar11 != 0) {
              FUN_00d50b20();
            }
          }
          else {
            do {
              FUN_00d79670();
              lVar11 = local_40;
              if ((local_38 == '\0') &&
                 (((local_40 != 0 && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)))) {
                FUN_00d50b20();
              }
              iVar4 = FUN_00e5d8b0();
              iVar9 = *(int *)(local_58 + 0x18);
              iVar6 = iVar9 + 3;
              if (-1 < iVar9) {
                iVar6 = iVar9;
              }
              if (3 < iVar9) {
                lVar10 = 0;
                do {
                  if (*(int *)(*(int64_t *)(local_58 + 0x10) + lVar10 * 4) == iVar4) {
                    FUN_00d79730();
                    iVar3 = iVar3 + -1;
                    if (lVar11 == 0) goto LAB_00e47640;
                    goto LAB_00e476f8;
                  }
                  lVar10 = lVar10 + 1;
                } while (iVar6 >> 2 != (int)lVar10);
              }
              if (lVar11 != 0) {
LAB_00e476f8:
                FUN_00d50b20();
              }
LAB_00e47640:
              bVar2 = 1 < iVar5;
              iVar5 = iVar5 + -1;
            } while (bVar2);
            if (iVar3 != 0) goto LAB_00e4771e;
          }
          if (local_58 != 0) {
            FUN_00d50b20();
          }
        }
        if ((char)local_44 == '\0') {
          FUN_00d50b20();
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(lVar1 + 0xc));
  }
  return;
}

