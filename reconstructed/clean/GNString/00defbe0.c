// Function: FUN_00defbe0
// Address: 00defbe0
// Size: 1523 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00defbe0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  int64_t lVar5;
  int64_t *plVar6;
  void*puVar7;
  int64_t lVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  uint local_5c;
  int64_t local_58;
  uint8_t local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  if (g_028a87a0 == '\0') {
    if ((g_028a87a8 == (int64_t *)0x0) || (g_028a87b1 == '\0')) {
      FUN_00e8cb50();
      if (g_028a87a8 == (int64_t *)0x0) {
        plVar6 = (int64_t *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar6 = (int64_t)&g_02573318;
        (*g_02573330)();
        if (g_028a87a8 == plVar6) {
          bVar4 = false;
          bVar3 = false;
        }
        else {
          bVar4 = true;
          bVar3 = true;
          bVar11 = g_028a87a8 != (int64_t *)0x0;
          g_028a87a8 = plVar6;
          if (bVar11) {
            FUN_00d50b20();
          }
        }
        if (g_028a87b0 == '\0') {
          g_028a87b0 = '\x01';
          FUN_00e8cb90();
          bVar3 = bVar4;
        }
        if (!bVar3) {
          FUN_00d50b20();
        }
        g_028a87b1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a87b1 = '\x01';
        FUN_00e8cb70();
      }
    }
    (**(code **)(*g_028a87a8 + 0x368))();
    if (g_028a8770 == (void*)0x0) {
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_0258a670;
      (*g_0258a688)();
      if (g_028a8770 == puVar7) {
        bVar4 = false;
        bVar3 = false;
      }
      else {
        bVar4 = true;
        bVar3 = true;
        bVar11 = g_028a8770 != (void*)0x0;
        g_028a8770 = puVar7;
        if (bVar11) {
          FUN_00d50b20();
        }
      }
      if (g_028a8778 == '\0') {
        g_028a8778 = '\x01';
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
    if (g_028a8780 == (void*)0x0) {
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_0258a670;
      (*g_0258a688)();
      if (g_028a8780 == puVar7) {
        bVar4 = false;
        bVar3 = false;
      }
      else {
        bVar4 = true;
        bVar3 = true;
        bVar11 = g_028a8780 != (void*)0x0;
        g_028a8780 = puVar7;
        if (bVar11) {
          FUN_00d50b20();
        }
      }
      if (g_028a8788 == '\0') {
        g_028a8788 = '\x01';
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
    if (g_028a8790 == (void*)0x0) {
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_0258a670;
      (*g_0258a688)();
      if (g_028a8790 == puVar7) {
        bVar4 = false;
        bVar3 = false;
      }
      else {
        bVar4 = true;
        bVar3 = true;
        bVar11 = g_028a8790 != (void*)0x0;
        g_028a8790 = puVar7;
        if (bVar11) {
          FUN_00d50b20();
        }
      }
      if (g_028a8798 == '\0') {
        g_028a8798 = '\x01';
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
    lVar5 = g_028a8760;
    if (g_028a8760 != 0) {
      if (0 < *(int *)(g_028a8760 + 0xc)) {
        uVar9 = 0;
        do {
          lVar1 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + (uint64_t)uVar9 * 8);
          lVar2 = *(int64_t *)(lVar1 + 0x20);
          local_5c = uVar9;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_00df0470();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          lVar2 = *(int64_t *)(lVar1 + 0x28);
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
              lVar8 = (int64_t)(int)local_40;
              iVar10 = (int)local_40 + 1;
              local_40 = CONCAT44(local_40._4_4_,iVar10);
              if (*(int *)(local_48 + 0xc) <= iVar10) break;
              local_90 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar8 * 8);
              local_88 = '\0';
              local_58 = local_90;
              FUN_00df0470(*(int64_t *)(local_48 + 0x10),&local_90);
              if ((local_88 != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
            }
            FUN_00018280();
          }
          lVar8 = *(int64_t *)(lVar1 + 0x30);
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
              lVar8 = (int64_t)(int)local_40;
              iVar10 = (int)local_40 + 1;
              local_40 = CONCAT44(local_40._4_4_,iVar10);
              if (*(int *)(local_48 + 0xc) <= iVar10) break;
              local_70 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar8 * 8);
              local_78 = '\0';
              local_68 = '\0';
              local_80 = lVar1;
              local_58 = local_70;
              FUN_00df0470(*(int64_t *)(local_48 + 0x10),&local_70);
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
    g_028a87a0 = '\x01';
    (**(code **)(*g_028a87a8 + 0x378))();
  }
  return;
}

