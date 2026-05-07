// Function: FUN_0037cca0
// Address: 0037cca0
// Size: 1680 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x0037d11e) */
/* WARNING: Removing unreachable block (ram,0x0037d12a) */

void FUN_0037cca0(void)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong **pplVar6;
  longlong *plVar7;
  int iVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar9;
  bool bVar10;
  longlong local_d0;
  char local_c8;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong *local_50;
  undefined8 *local_48;
  longlong *local_40;
  char local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  local_48 = puVar3;
  if ((longlong *)*unaff_RSI != (longlong *)0x0) {
    local_70 = '\0';
    local_78 = (longlong *)0x0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_68 = (longlong *)*unaff_RSI;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar8 = -local_60._4_4_;
        }
        else {
          iVar8 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar8);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar8 = 0;
        }
        local_60 = CONCAT44(iVar8,(int)local_60);
      }
      lVar4 = (longlong)(int)local_60;
      iVar8 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar8);
      if (*(int *)((longlong)local_68 + 0xc) <= iVar8) break;
      plVar9 = *(longlong **)(local_68[2] + 8 + lVar4 * 8);
      local_78 = plVar9;
      if (local_70 == '\0') {
        if (plVar9 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_0037cdaa;
        }
      }
      else {
        local_70 = '\0';
        if (plVar9 != (longlong *)0x0) {
LAB_0037cdaa:
          bVar10 = true;
          local_80 = plVar9;
          local_50 = plVar9;
          do {
            local_38 = '\0';
            local_40 = plVar9;
            cVar2 = FUN_00d23d70();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar2 != '\0') break;
            local_38 = '\0';
            local_40 = plVar9;
            FUN_00d23370();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            (**(code **)(*plVar9 + 0x3f0))();
            plVar5 = local_40;
            if (local_38 == '\0') {
              if (local_40 == (longlong *)0x0) goto LAB_0037cee0;
              FUN_00d50b00();
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_0037cea0:
              if (plVar5 == plVar9) {
                if (bVar10) {
                  bVar1 = false;
                }
                else {
                  FUN_00d50b00();
                  bVar10 = true;
                  bVar1 = false;
                }
              }
              else {
                FUN_00d50b00();
                local_80 = plVar5;
                if ((bVar10) && (plVar9 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                bVar1 = false;
                local_50 = plVar5;
                plVar9 = plVar5;
                bVar10 = true;
              }
LAB_0037d050:
              if (!bVar1) {
                FUN_00d50b20();
              }
            }
            else {
              if (local_40 != (longlong *)0x0) goto LAB_0037cea0;
LAB_0037cee0:
              FUN_00276fd0();
              if (plVar9 == (longlong *)0x0) {
                if (DAT_02802688 != 0) goto LAB_0037cf65;
                bVar1 = true;
                plVar9 = (longlong *)0x0;
                goto LAB_0037d050;
              }
              (**(code **)(*plVar9 + 0x360))();
              cVar2 = FUN_00e85ea0();
              pplVar6 = &local_80;
              if (cVar2 == '\0') {
                pplVar6 = (longlong **)&DAT_02802688;
              }
              if (*pplVar6 == (longlong *)0x0) {
                local_80 = (longlong *)0x0;
                bVar1 = true;
                if (bVar10) {
                  local_50 = (longlong *)0x0;
                  FUN_00d50b20();
                  plVar9 = (longlong *)0x0;
                  bVar10 = false;
                }
                else {
                  local_50 = (longlong *)0x0;
                  plVar9 = (longlong *)0x0;
                  bVar10 = false;
                }
                goto LAB_0037d050;
              }
LAB_0037cf65:
              FUN_00cd64a0();
              FUN_00cd0b60();
              plVar5 = local_40;
              if (local_40 == plVar9) {
                if ((!bVar10) && (plVar9 != (longlong *)0x0)) {
                  plVar5 = plVar9;
                  plVar7 = local_50;
                  if (local_38 != '\0') goto LAB_0037cfcf;
                  bVar10 = true;
                  FUN_00d50b00();
                }
LAB_0037d081:
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_38 == '\0') {
                  if (local_40 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  local_80 = plVar5;
                  if ((bVar10) && (plVar9 != (longlong *)0x0)) {
                    FUN_00d50b20();
                    local_50 = plVar5;
                    plVar9 = plVar5;
                    bVar10 = true;
                  }
                  else {
                    local_50 = plVar5;
                    plVar9 = plVar5;
                    bVar10 = true;
                  }
                  goto LAB_0037d081;
                }
                local_80 = local_40;
                plVar7 = plVar5;
                if ((bVar10) && (plVar9 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
LAB_0037cfcf:
                local_38 = '\0';
                bVar10 = true;
                plVar9 = plVar5;
                local_50 = plVar7;
              }
              if ((local_c8 != '\0') && (local_d0 != 0)) {
                FUN_00d50b20();
              }
            }
          } while (plVar9 != (longlong *)0x0);
          puVar3 = local_48;
          plVar9 = local_80;
          if ((bVar10) && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
            plVar9 = local_80;
          }
        }
      }
      local_80 = plVar9;
    }
    FUN_00115910();
  }
  FUN_01c26760();
  if ((*(longlong **)(unaff_RDI + 0xd8) == (longlong *)0x0) ||
     (cVar2 = (**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x5e8))(), cVar2 == '\0'))
  goto LAB_0037d349;
  FUN_01c261c0();
  plVar9 = local_78;
  if (local_70 == '\0') {
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0037d1a1;
    }
LAB_0037d287:
    bVar10 = true;
  }
  else {
    if (local_78 == (longlong *)0x0) goto LAB_0037d287;
LAB_0037d1a1:
    local_70 = '\0';
    local_78 = (longlong *)0x0;
    local_68 = plVar9;
    local_60 = 0xffffffff;
    local_58 = 0;
    while( true ) {
      lVar4 = (longlong)(int)local_60;
      iVar8 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar8);
      if (*(int *)((longlong)local_68 + 0xc) <= iVar8) break;
      plVar9 = *(longlong **)(local_68[2] + 8 + lVar4 * 8);
      lVar4 = *(longlong *)(unaff_RDI + 0xe0);
      local_78 = plVar9;
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      cVar2 = (**(code **)(*plVar9 + 0x50))();
      puVar3 = local_48;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        FUN_00115910();
        goto LAB_0037d341;
      }
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar8 = -local_60._4_4_;
        }
        else {
          local_60 = CONCAT44(local_60._4_4_,(int)local_60 - local_60._4_4_);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar8 = 0;
        }
        local_60 = CONCAT44(iVar8,(int)local_60);
      }
    }
    FUN_00115910();
    bVar10 = false;
  }
  plVar9 = *(longlong **)(unaff_RDI + 0xd8);
  FUN_0141cb10();
  plVar5 = local_78;
  if (local_70 == '\0') {
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  (**(code **)(*plVar9 + 0x690))();
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  puVar3 = local_48;
  if (!bVar10) {
LAB_0037d341:
    FUN_00d50b20();
  }
LAB_0037d349:
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


