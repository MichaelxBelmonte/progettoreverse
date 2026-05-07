// Function: FUN_00cb1490
// Address: 00cb1490
// Size: 1663 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00cb1671) */
/* WARNING: Removing unreachable block (ram,0x00cb167d) */

undefined8 * FUN_00cb1490(code *param_1,undefined8 *param_2,longlong *param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int extraout_var;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  code *pcVar9;
  int iVar10;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  uint uVar11;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0 [8];
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  char local_78 [8];
  longlong *local_70;
  undefined8 local_68;
  int local_60;
  undefined8 local_58;
  undefined8 *local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  local_a0 = param_2;
  local_90 = param_3;
  FUN_00d4efa0();
  lVar5 = local_c8;
  local_48[0] = local_c0[0];
  pcVar8 = local_48;
  if (local_c0[0] != '\0') {
    pcVar8 = local_c0;
  }
  *pcVar8 = '\0';
  if ((local_c0[0] != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c820a0();
  lVar2 = local_c8;
  pcVar8 = local_c0;
  if (local_c0[0] == '\0') {
    pcVar8 = local_40;
  }
  local_40[0] = local_c0[0];
  *pcVar8 = '\0';
  if ((local_c0[0] != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  pcVar1 = DAT_02578b18;
  if (lVar2 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
LAB_00cb1ab5:
    *unaff_RDI = 0;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    local_98 = lVar5;
    local_c0[0] = '\0';
    local_c8 = 0;
    local_b8 = lVar2;
    local_a8 = 0;
    local_b0 = 0;
    uVar11 = 0;
    local_88 = lVar2;
    if (*(int *)(lVar2 + 0xc) < 1) {
      local_58 = 0;
      local_50 = (undefined8 *)0x0;
    }
    else {
      local_90 = (longlong *)((longlong)local_90 + (longlong)unaff_RSI);
      local_50 = (undefined8 *)0x0;
      local_58 = 0;
      do {
        local_118 = *(longlong *)(*(longlong *)(local_88 + 0x10) + (ulonglong)uVar11 * 8);
        local_110 = '\0';
        local_c8 = local_118;
        cVar4 = (**(code **)(*unaff_RSI + 0x408))((ulonglong)uVar11,&local_118);
        if ((local_110 != '\0') && (local_118 != 0)) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          FUN_00d77bd0();
          if (extraout_var < 2) {
            (**(code **)(*(longlong *)*local_a0 + 0x210))();
            plVar3 = local_80;
            local_38[0] = local_78[0];
            pcVar8 = local_78;
            if (local_78[0] == '\0') {
              pcVar8 = local_38;
            }
            *pcVar8 = '\0';
            if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar3 != (longlong *)0x0) {
              cVar4 = (**(code **)(*plVar3 + 0x70))();
              if ((cVar4 == '\0') && (cVar4 = (**(code **)(*plVar3 + 0x140))(), cVar4 != '\0')) {
                if (param_1 == (code *)0x0) {
                  if (local_50 == (undefined8 *)0x0) {
                    puVar6 = (undefined8 *)FUN_00e8fc40();
                    FUN_00d4ff40();
                    *puVar6 = &DAT_02578b00;
                    (*pcVar1)();
                    local_50 = puVar6;
                    uVar7 = FUN_00d7a0f0(1,1);
                    local_58 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
                  }
                  local_d8 = plVar3;
                  local_d0 = '\0';
                  FUN_00d7a410();
                  if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  pcVar9 = param_1;
                  if (((ulonglong)param_1 & 1) != 0) {
                    pcVar9 = *(code **)(param_1 + *local_90 + -1);
                  }
                  local_e8 = plVar3;
                  local_e0 = '\0';
                  (*pcVar9)();
                  if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              if (local_38[0] != '\0') {
                FUN_00d50b20();
              }
            }
          }
          else {
            (**(code **)(*(longlong *)*local_a0 + 0x210))();
            plVar3 = local_80;
            local_38[0] = local_78[0];
            pcVar8 = local_78;
            if (local_78[0] == '\0') {
              pcVar8 = local_38;
            }
            *pcVar8 = '\0';
            if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar3 != (longlong *)0x0) {
              local_78[0] = '\0';
              local_80 = (longlong *)0x0;
              local_70 = plVar3;
              local_68 = 0xffffffff;
              local_60 = 0;
              local_68._4_4_ = 0;
              if (param_1 == (code *)0x0) {
                while( true ) {
                  if (local_68._4_4_ != 0) {
                    if (local_68._4_4_ < 1) {
                      iVar10 = -local_68._4_4_;
                    }
                    else {
                      iVar10 = (int)local_68 - local_68._4_4_;
                      local_68 = CONCAT44(local_68._4_4_,iVar10);
                      FUN_00d23690();
                      local_60 = local_60 + local_68._4_4_;
                      iVar10 = 0;
                    }
                    local_68 = CONCAT44(iVar10,(int)local_68);
                  }
                  lVar5 = (longlong)(int)local_68;
                  iVar10 = (int)local_68 + 1;
                  local_68 = CONCAT44(local_68._4_4_,iVar10);
                  if (*(int *)((longlong)local_70 + 0xc) <= iVar10) break;
                  local_80 = *(longlong **)(local_70[2] + 8 + lVar5 * 8);
                  cVar4 = (**(code **)(*local_80 + 0x70))();
                  if ((cVar4 == '\0') && (cVar4 = (**(code **)(*local_80 + 0x140))(), cVar4 != '\0')
                     ) {
                    if (local_50 == (undefined8 *)0x0) {
                      puVar6 = (undefined8 *)FUN_00e8fc40();
                      FUN_00d4ff40();
                      *puVar6 = &DAT_02578b00;
                      (*pcVar1)();
                      local_50 = puVar6;
                      uVar7 = FUN_00d7a0f0(1,1);
                      local_58 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
                    }
                    local_f8 = local_80;
                    local_f0 = '\0';
                    FUN_00d7a410();
                    if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                }
              }
              else {
                while( true ) {
                  if (local_68._4_4_ != 0) {
                    if (local_68._4_4_ < 1) {
                      iVar10 = -local_68._4_4_;
                    }
                    else {
                      iVar10 = (int)local_68 - local_68._4_4_;
                      local_68 = CONCAT44(local_68._4_4_,iVar10);
                      FUN_00d23690();
                      local_60 = local_60 + local_68._4_4_;
                      iVar10 = 0;
                    }
                    local_68 = CONCAT44(iVar10,(int)local_68);
                  }
                  lVar5 = (longlong)(int)local_68;
                  iVar10 = (int)local_68 + 1;
                  local_68 = CONCAT44(local_68._4_4_,iVar10);
                  if (*(int *)((longlong)local_70 + 0xc) <= iVar10) break;
                  local_80 = *(longlong **)(local_70[2] + 8 + lVar5 * 8);
                  cVar4 = (**(code **)(*local_80 + 0x70))();
                  if ((cVar4 == '\0') && (cVar4 = (**(code **)(*local_80 + 0x140))(), cVar4 != '\0')
                     ) {
                    pcVar9 = param_1;
                    if (((ulonglong)param_1 & 1) != 0) {
                      pcVar9 = *(code **)(param_1 + *local_90 + -1);
                    }
                    local_108 = local_80;
                    local_100 = '\0';
                    (*pcVar9)();
                    if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                }
              }
              FUN_00083b20();
              if (local_38[0] != '\0') {
                FUN_00d50b20();
              }
            }
          }
        }
        uVar11 = uVar11 + 1;
        local_b0 = CONCAT44(local_b0._4_4_,uVar11);
      } while ((int)uVar11 < *(int *)(local_88 + 0xc));
    }
    FUN_00559a70();
    if (local_40[0] != '\0') {
      FUN_00d50b20();
    }
    puVar6 = local_50;
    lVar5 = local_98;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((char)local_58 == '\0') {
      if (local_50 == (undefined8 *)0x0) goto LAB_00cb1ab5;
      FUN_00d50b00();
    }
    *unaff_RDI = puVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if ((local_48[0] != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


