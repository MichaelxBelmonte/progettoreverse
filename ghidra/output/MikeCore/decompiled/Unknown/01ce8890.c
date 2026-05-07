// Function: FUN_01ce8890
// Address: 01ce8890
// Size: 2128 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01ce8aa3) */
/* WARNING: Removing unreachable block (ram,0x01ce8e2f) */
/* WARNING: Removing unreachable block (ram,0x01ce8e3f) */
/* WARNING: Removing unreachable block (ram,0x01ce8b89) */
/* WARNING: Removing unreachable block (ram,0x01ce8b95) */
/* WARNING: Removing unreachable block (ram,0x01ce89a2) */
/* WARNING: Removing unreachable block (ram,0x01ce89ae) */
/* WARNING: Removing unreachable block (ram,0x01ce8b1d) */
/* WARNING: Removing unreachable block (ram,0x01ce8b29) */
/* WARNING: Removing unreachable block (ram,0x01ce8dcd) */
/* WARNING: Removing unreachable block (ram,0x01ce8dd9) */
/* WARNING: Removing unreachable block (ram,0x01ce9031) */
/* WARNING: Removing unreachable block (ram,0x01ce903d) */

void FUN_01ce8890(longlong param_1,longlong *param_2)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  int iVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_128;
  char local_120;
  longlong local_b0;
  char local_a8 [8];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  undefined8 local_78;
  uint local_70;
  undefined4 local_64;
  longlong local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  char local_38 [8];
  
  FUN_01ce9490();
  local_58 = local_90;
  if ((local_88 == '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01ce98e0();
  local_a0 = local_90;
  if ((local_88 == '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  param_2 = (longlong *)*param_2;
  if (local_58 == param_2) {
LAB_01ce894e:
    cVar4 = local_a0 == (longlong *)*unaff_RSI;
    if (((!(bool)cVar4) && (local_a0 != (longlong *)0x0)) &&
       ((longlong *)*unaff_RSI != (longlong *)0x0)) {
      cVar4 = (**(code **)(*local_a0 + 0x50))();
    }
    if (((local_58 != param_2) && (local_120 != '\0')) && (local_128 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_01ce89e1:
    if (cVar4 != '\0') goto LAB_01ce90b9;
  }
  else if ((local_58 != (longlong *)0x0) && (param_2 != (longlong *)0x0)) {
    local_120 = '\0';
    cVar4 = (**(code **)(*local_58 + 0x50))();
    local_128 = param_2;
    if (cVar4 != '\0') goto LAB_01ce894e;
    cVar4 = '\0';
    goto LAB_01ce89e1;
  }
  lVar6 = local_80;
  if (*unaff_RSI == 0) {
    local_60 = 0;
    local_98 = 0;
  }
  else {
    if ((*(int *)(*unaff_RSI + 0xc) == 0) || (local_60 = unaff_RDI[0x2b], local_60 == 0)) {
      local_98 = 0;
      local_60 = 0;
      lVar8 = *unaff_RSI;
    }
    else {
      uVar5 = FUN_00d50b00();
      local_98 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      if (unaff_RDI[0x2b] != 0) {
        unaff_RDI[0x2b] = 0;
        FUN_00d50b20();
      }
      lVar8 = *unaff_RSI;
      lVar6 = local_80;
    }
    local_80 = lVar8;
    if (local_80 != 0) {
      local_88 = '\0';
      local_90 = (longlong *)0x0;
      local_78 = 0xffffffff;
      local_70 = 0;
      while( true ) {
        lVar6 = (longlong)(int)(uint)local_78;
        iVar9 = (uint)local_78 + 1;
        local_78 = CONCAT44(local_78._4_4_,iVar9);
        if (*(int *)(local_80 + 0xc) <= iVar9) break;
        param_1 = *(longlong *)(local_80 + 0x10);
        local_90 = *(longlong **)(param_1 + 8 + lVar6 * 8);
        cVar4 = FUN_00d23d70();
        if (cVar4 != '\0') {
          FUN_00083b20();
          lVar6 = local_60;
          goto joined_r0x01ce8be0;
        }
        if (local_78._4_4_ != 0) {
          if (local_78._4_4_ < 1) {
            iVar9 = -local_78._4_4_;
          }
          else {
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 - local_78._4_4_);
            FUN_00d23690();
            local_70 = local_70 + local_78._4_4_;
            iVar9 = 0;
          }
          local_78 = CONCAT44(iVar9,(uint)local_78);
        }
      }
      param_1 = local_80;
      FUN_00083b20();
      lVar6 = local_80;
    }
  }
  local_80 = lVar6;
  FUN_01ce9a80();
  lVar6 = local_60;
joined_r0x01ce8be0:
  local_60 = lVar6;
  if ((lVar6 != 0) && (lVar8 = unaff_RDI[0x2b], lVar8 != lVar6)) {
    FUN_00d50b00();
    unaff_RDI[0x2b] = lVar6;
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  local_64 = (undefined4)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  if (*unaff_RSI == 0) {
    bVar1 = false;
    local_50 = 0;
    lVar6 = 0;
  }
  else {
    local_88 = '\0';
    local_90 = (longlong *)0x0;
    local_78 = 0xffffffff;
    local_70 = 0;
    local_50 = 0;
    local_40 = 0;
    bVar1 = false;
    local_48 = 0;
    local_80 = *unaff_RSI;
    local_78._4_4_ = 0;
    while( true ) {
      if (local_78._4_4_ != 0) {
        if (local_78._4_4_ < 1) {
          iVar9 = -local_78._4_4_;
        }
        else {
          iVar9 = (uint)local_78 - local_78._4_4_;
          local_78 = CONCAT44(local_78._4_4_,iVar9);
          FUN_00d23690();
          local_70 = local_70 + local_78._4_4_;
          iVar9 = 0;
        }
        local_78 = CONCAT44(iVar9,(uint)local_78);
      }
      uVar2 = (uint)local_78;
      lVar6 = (longlong)(int)(uint)local_78;
      iVar9 = (uint)local_78 + 1;
      local_78 = CONCAT44(local_78._4_4_,iVar9);
      if (*(int *)(local_80 + 0xc) <= iVar9) break;
      local_90 = *(longlong **)(*(longlong *)(local_80 + 0x10) + 8 + lVar6 * 8);
      if (local_70 == ~uVar2) {
        FUN_01cea620();
        if (1 < *(int *)(*unaff_RSI + 0xc)) {
          cVar4 = FUN_01ce7560();
          if (cVar4 != '\0') {
            (**(code **)(*unaff_RDI + 0x988))();
          }
          FUN_00d23340();
          local_38[0] = local_a8[0];
          pcVar7 = local_a8;
          if (local_a8[0] == '\0') {
            pcVar7 = local_38;
          }
          *pcVar7 = '\0';
          if ((local_a8[0] != '\0') && (local_b0 != 0)) {
            pcVar7 = (char *)FUN_00d50b20();
          }
          lVar6 = local_40;
          if (local_b0 == local_40) {
            pcVar7 = (char *)0x0;
            if (((char)local_50 == '\0') && (local_b0 != 0)) {
              if (local_38[0] == '\0') {
                pcVar7 = (char *)FUN_00d50b00();
              }
              goto LAB_01ce8eb8;
            }
            if ((local_38[0] != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            lVar6 = local_b0;
            if (local_38[0] == '\0') {
              if (local_b0 != 0) {
                pcVar7 = (char *)FUN_00d50b00();
              }
              if (((char)local_50 != '\0') && (local_40 != 0)) {
                pcVar7 = (char *)FUN_00d50b20();
              }
            }
            else if (((char)local_50 != '\0') && (local_40 != 0)) {
              pcVar7 = (char *)FUN_00d50b20();
            }
LAB_01ce8eb8:
            local_50 = CONCAT71((int7)((ulonglong)pcVar7 >> 8),1);
            local_40 = lVar6;
          }
          if (local_40 == 0) {
            local_40 = 0;
          }
          else {
            lVar6 = *(longlong *)(local_40 + 0x20);
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
            FUN_01ce41d0();
            if (local_b0 == local_48) {
              lVar8 = local_48;
              bVar3 = bVar1;
              if ((bVar1) || (local_b0 == 0)) goto joined_r0x01ce8f88;
              if (local_a8[0] == '\0') {
                FUN_00d50b00();
                goto LAB_01ce8f98;
              }
LAB_01ce8f45:
              local_a8[0] = '\0';
              bVar1 = true;
              local_48 = lVar8;
            }
            else {
              if (local_a8[0] != '\0') {
                lVar8 = local_b0;
                if ((bVar1) && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                goto LAB_01ce8f45;
              }
              if (local_b0 != 0) {
                FUN_00d50b00();
              }
              lVar8 = local_b0;
              bVar3 = true;
              if ((bVar1) && (lVar8 = local_b0, local_48 != 0)) {
                FUN_00d50b20();
                local_48 = local_b0;
LAB_01ce8f98:
                lVar8 = local_48;
                bVar3 = true;
              }
joined_r0x01ce8f88:
              bVar1 = bVar3;
              local_48 = lVar8;
              if ((local_a8[0] != '\0') && (local_b0 != 0)) {
                FUN_00d50b20();
              }
            }
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
          }
        }
      }
      else if (((local_40 != 0) && (local_48 != 0)) && (cVar4 = FUN_00d23d70(), cVar4 != '\0')) {
        FUN_00d237a0();
        FUN_01dd3d20();
      }
    }
    FUN_00083b20();
    if (local_40 == 0) {
      lVar6 = local_48;
    }
    else {
      (**(code **)(*unaff_RDI + 0x950))();
      local_64 = 0;
      lVar6 = local_48;
    }
  }
  if (((char)local_98 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_50 != '\0' && (char)local_64 == '\0') {
    FUN_00d50b20();
  }
  if ((bVar1) && (lVar6 != 0)) {
    FUN_00d50b20();
  }
LAB_01ce90b9:
  if (local_a0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


