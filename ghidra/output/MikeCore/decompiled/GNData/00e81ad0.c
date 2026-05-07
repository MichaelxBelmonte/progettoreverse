// Function: FUN_00e81ad0
// Address: 00e81ad0
// Size: 1342 bytes
// Class: GNData


void FUN_00e81ad0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  char *pcVar8;
  uint uVar9;
  longlong unaff_RDI;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong local_f8;
  char local_f0;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((*(longlong *)(unaff_RDI + 0x38) != 0) &&
     (*(int *)(*(longlong *)(unaff_RDI + 0x40) + 0xc) != 0)) {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_02578b00;
    (*DAT_02578b18)();
    if (*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) != 0) {
      FUN_00c8d620();
    }
    FUN_00d7a0f0(1,1);
    if (((*(longlong *)(unaff_RDI + 0x38) != 0) &&
        (*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) != 0)) &&
       (iVar5 = FUN_00c8d620(), 0 < iVar5)) {
      iVar12 = 0;
      bVar10 = true;
      do {
        do {
          do {
            plVar7 = (longlong *)FUN_00c8df10();
          } while (plVar7 == (longlong *)0x0);
          lVar1 = *plVar7;
        } while (lVar1 == 0);
        if (!bVar10) break;
        local_c8 = '\0';
        local_d0 = lVar1;
        FUN_019a54a0(lVar1,&local_d0);
        if (local_f0 == '\0') {
          if (local_f8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_f0 = '\0';
        }
        FUN_00d7a410();
        if (local_f8 != 0) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        iVar12 = iVar12 + 1;
        bVar10 = iVar12 < iVar5;
      } while (iVar12 != iVar5);
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x40);
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        uVar9 = 0;
        do {
          plVar7 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + (ulonglong)uVar9 * 8);
          uVar2 = *(undefined8 *)
                   (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + (ulonglong)uVar9 * 8);
          cVar4 = FUN_00d77de0();
          if (cVar4 == '\0') {
            (**(code **)(*plVar7 + 0x210))();
            local_38[0] = local_40[0];
            pcVar8 = local_40;
            if (local_40[0] == '\0') {
              pcVar8 = local_38;
            }
            *pcVar8 = '\0';
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            local_c0 = local_48;
            local_b8 = '\0';
            FUN_019a54a0();
            if (local_40[0] == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40[0] = '\0';
            }
            (**(code **)(*plVar7 + 0x200))(0,uVar2,0);
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if ((local_b8 != '\0') && (local_c0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            (**(code **)(*plVar7 + 0x210))();
            if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')
                ) && (local_48 != 0)) {
              FUN_00d50b20();
            }
            uVar13 = *(uint *)(local_48 + 0xc);
            if (0 < (int)uVar13) {
              lVar11 = (ulonglong)uVar13 + 1;
              do {
                uVar13 = uVar13 - 1;
                lVar3 = *(longlong *)(*(longlong *)(local_48 + 0x10) + (ulonglong)uVar13 * 8);
                local_a8 = '\0';
                local_b0 = lVar3;
                cVar4 = FUN_00d7a850();
                if ((local_a8 != '\0') && (local_b0 != 0)) {
                  FUN_00d50b20();
                }
                if (cVar4 == '\0') {
                  local_98 = '\0';
                  local_a0 = lVar3;
                  FUN_019a54a0();
                  local_38[0] = local_40[0];
                  pcVar8 = local_40;
                  if (local_40[0] == '\0') {
                    pcVar8 = local_38;
                  }
                  *pcVar8 = '\0';
                  if ((local_40[0] != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_98 != '\0') && (local_a0 != 0)) {
                    FUN_00d50b20();
                  }
                  if (local_48 == 0) {
                    FUN_00d23620();
                  }
                  else {
                    local_90 = local_48;
                    local_88 = '\0';
                    FUN_00d233f0();
                    if ((local_88 != '\0') && (local_90 != 0)) {
                      FUN_00d50b20();
                    }
                    if (local_38[0] != '\0') {
                      FUN_00d50b20();
                    }
                  }
                }
                lVar11 = lVar11 + -1;
              } while (1 < lVar11);
            }
            FUN_00d50b20();
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < *(int *)(lVar1 + 0xc));
      }
      FUN_00083b20();
    }
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


