// Function: FUN_00defbe0
// Address: 00defbe0
// Size: 1523 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00deff9e) */
/* WARNING: Removing unreachable block (ram,0x00deffaa) */
/* WARNING: Removing unreachable block (ram,0x00df0094) */
/* WARNING: Removing unreachable block (ram,0x00df00a4) */

void FUN_00defbe0(void)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  uint local_5c;
  longlong local_58;
  undefined1 local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  if (DAT_028a87a0 == '\0') {
    if ((DAT_028a87a8 == (longlong *)0x0) || (DAT_028a87b1 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a87a8 == (longlong *)0x0) {
        plVar6 = (longlong *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar6 = (longlong)&DAT_02573318;
        (*DAT_02573330)();
        if (DAT_028a87a8 == plVar6) {
          bVar4 = false;
          bVar3 = false;
        }
        else {
          bVar4 = true;
          bVar3 = true;
          bVar11 = DAT_028a87a8 != (longlong *)0x0;
          DAT_028a87a8 = plVar6;
          if (bVar11) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a87b0 == '\0') {
          DAT_028a87b0 = '\x01';
          FUN_00e8cb90();
          bVar3 = bVar4;
        }
        if (!bVar3) {
          FUN_00d50b20();
        }
        DAT_028a87b1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a87b1 = '\x01';
        FUN_00e8cb70();
      }
    }
    (**(code **)(*DAT_028a87a8 + 0x368))();
    if (DAT_028a8770 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_0258a670;
      (*DAT_0258a688)();
      if (DAT_028a8770 == puVar7) {
        bVar4 = false;
        bVar3 = false;
      }
      else {
        bVar4 = true;
        bVar3 = true;
        bVar11 = DAT_028a8770 != (undefined8 *)0x0;
        DAT_028a8770 = puVar7;
        if (bVar11) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a8778 == '\0') {
        DAT_028a8778 = '\x01';
        FUN_00e8cb90();
        bVar3 = bVar4;
      }
      if (!bVar3) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00e38430();
    }
    if (DAT_028a8780 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_0258a670;
      (*DAT_0258a688)();
      if (DAT_028a8780 == puVar7) {
        bVar4 = false;
        bVar3 = false;
      }
      else {
        bVar4 = true;
        bVar3 = true;
        bVar11 = DAT_028a8780 != (undefined8 *)0x0;
        DAT_028a8780 = puVar7;
        if (bVar11) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a8788 == '\0') {
        DAT_028a8788 = '\x01';
        FUN_00e8cb90();
        bVar3 = bVar4;
      }
      if (!bVar3) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00e38430();
    }
    if (DAT_028a8790 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_0258a670;
      (*DAT_0258a688)();
      if (DAT_028a8790 == puVar7) {
        bVar4 = false;
        bVar3 = false;
      }
      else {
        bVar4 = true;
        bVar3 = true;
        bVar11 = DAT_028a8790 != (undefined8 *)0x0;
        DAT_028a8790 = puVar7;
        if (bVar11) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a8798 == '\0') {
        DAT_028a8798 = '\x01';
        FUN_00e8cb90();
        bVar3 = bVar4;
      }
      if (!bVar3) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00e38430();
    }
    lVar5 = DAT_028a8760;
    if (DAT_028a8760 != 0) {
      if (0 < *(int *)(DAT_028a8760 + 0xc)) {
        uVar9 = 0;
        do {
          lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)uVar9 * 8);
          lVar2 = *(longlong *)(lVar1 + 0x20);
          local_5c = uVar9;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_00df0470();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          lVar2 = *(longlong *)(lVar1 + 0x28);
          if (lVar2 != 0) {
            FUN_00d50b00();
            local_50 = 0;
            local_58 = 0;
            local_40 = 0xffffffff;
            local_38 = 0;
            local_40._4_4_ = 0;
            local_48 = lVar2;
            while( true ) {
              if (local_40._4_4_ != 0) {
                if (local_40._4_4_ < 1) {
                  iVar10 = -local_40._4_4_;
                }
                else {
                  iVar10 = (int)local_40 - local_40._4_4_;
                  local_40 = CONCAT44(local_40._4_4_,iVar10);
                  FUN_00d23690();
                  local_38 = local_38 + local_40._4_4_;
                  iVar10 = 0;
                }
                local_40 = CONCAT44(iVar10,(int)local_40);
              }
              lVar8 = (longlong)(int)local_40;
              iVar10 = (int)local_40 + 1;
              local_40 = CONCAT44(local_40._4_4_,iVar10);
              if (*(int *)(local_48 + 0xc) <= iVar10) break;
              local_90 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar8 * 8);
              local_88 = '\0';
              local_58 = local_90;
              FUN_00df0470(*(longlong *)(local_48 + 0x10),&local_90);
              if ((local_88 != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
            }
            FUN_00018280();
          }
          lVar8 = *(longlong *)(lVar1 + 0x30);
          if (lVar8 != 0) {
            FUN_00d50b00();
            local_50 = 0;
            local_58 = 0;
            local_40 = 0xffffffff;
            local_38 = 0;
            local_40._4_4_ = 0;
            local_48 = lVar8;
            while( true ) {
              if (local_40._4_4_ != 0) {
                if (local_40._4_4_ < 1) {
                  iVar10 = -local_40._4_4_;
                }
                else {
                  iVar10 = (int)local_40 - local_40._4_4_;
                  local_40 = CONCAT44(local_40._4_4_,iVar10);
                  FUN_00d23690();
                  local_38 = local_38 + local_40._4_4_;
                  iVar10 = 0;
                }
                local_40 = CONCAT44(iVar10,(int)local_40);
              }
              lVar8 = (longlong)(int)local_40;
              iVar10 = (int)local_40 + 1;
              local_40 = CONCAT44(local_40._4_4_,iVar10);
              if (*(int *)(local_48 + 0xc) <= iVar10) break;
              local_70 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar8 * 8);
              local_78 = '\0';
              local_68 = '\0';
              local_80 = lVar1;
              local_58 = local_70;
              FUN_00df0470(*(longlong *)(local_48 + 0x10),&local_70);
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if ((local_78 != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
            }
            FUN_00018280();
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          uVar9 = local_5c + 1;
        } while ((int)uVar9 < *(int *)(lVar5 + 0xc));
      }
      FUN_00136a40();
    }
    DAT_028a87a0 = '\x01';
    (**(code **)(*DAT_028a87a8 + 0x378))();
  }
  return;
}


