// Function: FUN_00651de0
// Address: 00651de0
// Size: 1019 bytes
// Class: MUMultiTrackView


/* WARNING: Removing unreachable block (ram,0x00651ff7) */

void FUN_00651de0(void)

{
  longlong *plVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  int iVar5;
  longlong unaff_RDI;
  undefined8 uVar6;
  longlong local_88;
  char local_80;
  longlong local_70;
  char local_68 [8];
  longlong local_60;
  undefined8 local_58;
  int local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  if (*(int *)(unaff_RDI + 0x10c) < 1) {
    FUN_00631670();
    local_48[0] = local_68[0];
    pcVar3 = local_48;
    if (local_68[0] != '\0') {
      pcVar3 = local_68;
    }
    *pcVar3 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (local_70 == 0) {
      *(undefined4 *)(unaff_RDI + 0x10c) = 10;
    }
    else {
      FUN_006f3f00();
      local_40[0] = local_68[0];
      pcVar3 = local_40;
      if (local_68[0] != '\0') {
        pcVar3 = local_68;
      }
      *pcVar3 = '\0';
      if ((local_68[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_70 == 0) {
        *(undefined4 *)(unaff_RDI + 0x10c) = 10;
      }
      else {
        FUN_00756eb0();
        pcVar3 = local_68;
        if (local_68[0] == '\0') {
          pcVar3 = local_38;
        }
        local_38[0] = local_68[0];
        *pcVar3 = '\0';
        if ((local_68[0] != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if (local_70 == 0) {
          *(undefined4 *)(unaff_RDI + 0x10c) = 10;
        }
        else {
          uVar6 = (**(code **)(*(longlong *)(local_70 + 0x10) + 0x70))();
          if (*(longlong *)(unaff_RDI + 0x100) != 0) {
            local_68[0] = '\0';
            local_58 = 0xffffffff;
            local_50 = 0;
            local_60 = *(longlong *)(unaff_RDI + 0x100);
LAB_00651f45:
            lVar4 = (longlong)(int)local_58;
            iVar5 = (int)local_58 + 1;
            local_58 = CONCAT44(local_58._4_4_,iVar5);
            if (iVar5 < *(int *)(local_60 + 0xc)) {
              lVar4 = *(longlong *)(*(longlong *)(local_60 + 0x10) + 8 + lVar4 * 8);
              cVar2 = FUN_00212c70();
              if (cVar2 == '\0') goto code_r0x00651f72;
              FUN_0065ca40();
              FUN_006f4810();
              if (lVar4 == 0) {
                cVar2 = '\0';
              }
              else {
                FUN_006f4810();
                cVar2 = FUN_01e42170();
                if ((local_80 != '\0') && (local_88 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_68[0] != '\0') && (lVar4 != 0)) {
                FUN_00d50b20();
              }
              if (cVar2 == '\0') {
                if (*(longlong *)(unaff_RDI + 0x100) != 0) {
                  local_68[0] = '\0';
                  local_58 = 0xffffffff;
                  local_50 = 0;
                  local_60 = *(longlong *)(unaff_RDI + 0x100);
                  while( true ) {
                    iVar5 = (int)local_58 + 1;
                    local_58 = CONCAT44(local_58._4_4_,iVar5);
                    if (*(int *)(local_60 + 0xc) <= iVar5) break;
                    FUN_00235240(uVar6);
                    if (local_58._4_4_ != 0) {
                      if (local_58._4_4_ < 1) {
                        iVar5 = -local_58._4_4_;
                      }
                      else {
                        local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
                        FUN_00d23690();
                        local_50 = local_50 + local_58._4_4_;
                        iVar5 = 0;
                      }
                      local_58 = CONCAT44(iVar5,(int)local_58);
                    }
                  }
                  goto LAB_0065215c;
                }
              }
              else {
                FUN_006fdae0(uVar6);
              }
              goto LAB_00652165;
            }
            FUN_0065ca40();
          }
          FUN_006fdae0(uVar6);
          if (*(longlong *)(unaff_RDI + 0x100) != 0) {
            local_68[0] = '\0';
            local_58 = 0xffffffff;
            local_50 = 0;
            local_60 = *(longlong *)(unaff_RDI + 0x100);
            while( true ) {
              iVar5 = (int)local_58 + 1;
              local_58 = CONCAT44(local_58._4_4_,iVar5);
              if (*(int *)(local_60 + 0xc) <= iVar5) break;
              FUN_00235240(uVar6);
              if (local_58._4_4_ != 0) {
                if (local_58._4_4_ < 1) {
                  iVar5 = -local_58._4_4_;
                }
                else {
                  local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
                  FUN_00d23690();
                  local_50 = local_50 + local_58._4_4_;
                  iVar5 = 0;
                }
                local_58 = CONCAT44(iVar5,(int)local_58);
              }
            }
LAB_0065215c:
            FUN_0065ca40();
          }
LAB_00652165:
          if (*(longlong *)(unaff_RDI + 0x140) != 0) {
            FUN_00d50b00();
            FUN_00d50b20();
            plVar1 = *(longlong **)(unaff_RDI + 0x140);
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            (**(code **)(*plVar1 + 0x5d0))(uVar6);
            FUN_00d50b20();
          }
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
        }
        if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
      }
      if (local_48[0] != '\0') {
        FUN_00d50b20();
      }
    }
  }
  else {
    *(int *)(unaff_RDI + 0x10c) = *(int *)(unaff_RDI + 0x10c) + -1;
  }
  return;
code_r0x00651f72:
  if (local_58._4_4_ != 0) {
    if (local_58._4_4_ < 1) {
      iVar5 = -local_58._4_4_;
    }
    else {
      local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
      FUN_00d23690();
      local_50 = local_50 + local_58._4_4_;
      iVar5 = 0;
    }
    local_58 = CONCAT44(iVar5,(int)local_58);
  }
  goto LAB_00651f45;
}


