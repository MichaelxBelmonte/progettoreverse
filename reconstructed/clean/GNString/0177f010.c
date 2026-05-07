// Function: FUN_0177f010
// Address: 0177f010
// Size: 2223 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0177f010(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  uint64_t uVar6;
  int64_t lVar7;
  char *pcVar8;
  int iVar9;
  void*this_ptr;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t **pplVar12;
  bool bVar13;
  uint32_t uVar14;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60 [8];
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  char local_40 [8];
  uint32_t local_38;
  
  FUN_0177eb20();
  iVar9 = *(int *)((int64_t)local_68 + 0xc);
  if (local_60[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar9 == 0) {
    FUN_0177d950();
    plVar11 = local_68;
    if ((local_60[0] == '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_0177e850();
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (g_028adbe0 != (int64_t *)0x0) goto LAB_0177f7eb;
  FUN_00d6f370();
  plVar11 = local_78;
  lVar7 = g_027ce8b8;
  if (g_027ce8b8 != 0) {
    FUN_00d50b00();
  }
  pplVar12 = &local_68;
  (**(code **)(*plVar11 + 0x88))();
  plVar11 = local_68;
  if ((g_026fd0c0 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    g_026d5e50 = FUN_0005d920;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar11 == (int64_t *)0x0) {
LAB_0177f120:
    pplVar12 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0177f120;
  }
  plVar11 = *pplVar12;
  if (*(char *)(pplVar12 + 1) == '\0') {
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar12 + 1) = 0;
  }
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0177eb20();
  local_80 = local_68;
  if ((local_60[0] == '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  plVar10 = g_027ce888;
  if (plVar11 == (int64_t *)0x0) {
    if (g_027ce888 != (int64_t *)0x0) {
      FUN_00d50b00();
      plVar11 = plVar10;
    }
    FUN_00d30620();
    if (local_60[0] == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0177f21a;
      }
    }
    else if (local_68 != (int64_t *)0x0) {
LAB_0177f21a:
      FUN_00d305f0();
      plVar10 = local_68;
      if (local_68 == (int64_t *)0x0) {
        bVar1 = true;
        plVar10 = (int64_t *)0x0;
      }
      else {
        if (local_60[0] == '\0') {
          FUN_00d50b00();
          bVar1 = false;
          if ((local_60[0] == '\0') || (bVar1 = false, local_68 == (int64_t *)0x0))
          goto LAB_0177f25f;
          FUN_00d50b20();
        }
        bVar1 = false;
      }
LAB_0177f25f:
      FUN_00d50b20();
      lVar7 = g_0277d5b8;
      if (plVar10 != (int64_t *)0x0) {
        if (g_0277d5b8 != 0) {
          FUN_00d50b00();
        }
        uVar6 = (**(code **)(*plVar10 + 0x50))();
        cVar5 = (char)uVar6;
        if (lVar7 != 0) {
          uVar6 = FUN_00d50b20();
        }
        plVar4 = g_027ce8a8;
        lVar7 = g_0277d5b0;
        if (cVar5 == '\0') {
          if (g_0277d5b0 != 0) {
            FUN_00d50b00();
          }
          uVar6 = (**(code **)(*plVar10 + 0x50))();
          lVar2 = g_0277d5c0;
          cVar5 = '\x01';
          if ((char)uVar6 == '\0') {
            if (g_0277d5c0 != 0) {
              FUN_00d50b00();
            }
            uVar6 = (**(code **)(*plVar10 + 0x50))();
            lVar3 = g_0277d5c8;
            cVar5 = '\x01';
            if ((char)uVar6 == '\0') {
              if (g_0277d5c8 != 0) {
                FUN_00d50b00();
              }
              uVar6 = (**(code **)(*plVar10 + 0x50))();
              cVar5 = (char)uVar6;
              if (lVar3 != 0) {
                uVar6 = FUN_00d50b20();
              }
            }
            if (lVar2 != 0) {
              uVar6 = FUN_00d50b20();
            }
          }
          if (lVar7 != 0) {
            uVar6 = FUN_00d50b20();
          }
          plVar10 = g_027ce898;
          if (cVar5 != '\0') {
            if (g_027ce898 == (int64_t *)0x0) {
              if (plVar11 != (int64_t *)0x0) goto LAB_0177f43f;
            }
            else {
              uVar6 = FUN_00d50b00();
              if (plVar11 == plVar10) {
                uVar6 = FUN_00d50b20();
              }
              else {
LAB_0177f43f:
                bVar13 = plVar11 != (int64_t *)0x0;
                plVar11 = plVar10;
                if (bVar13) {
                  uVar6 = FUN_00d50b20();
                }
              }
            }
          }
        }
        else if (g_027ce8a8 == (int64_t *)0x0) {
          if (plVar11 != (int64_t *)0x0) goto LAB_0177f428;
        }
        else {
          uVar6 = FUN_00d50b00();
          if (plVar11 == plVar4) {
            uVar6 = FUN_00d50b20();
          }
          else {
LAB_0177f428:
            bVar13 = plVar11 != (int64_t *)0x0;
            plVar11 = plVar4;
            if (bVar13) {
              uVar6 = FUN_00d50b20();
            }
          }
        }
        local_38 = (uint32_t)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
        if (!bVar1) {
          FUN_00d50b20();
        }
        goto LAB_0177f466;
      }
    }
    local_38 = 0;
  }
  else {
    local_38 = 0;
  }
LAB_0177f466:
  if (local_80 != (int64_t *)0x0) {
    local_60[0] = '\0';
    local_68 = (int64_t *)0x0;
    local_58 = local_80;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar9 = -local_50._4_4_;
        }
        else {
          iVar9 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar9);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar9 = 0;
        }
        local_50 = CONCAT44(iVar9,(int)local_50);
      }
      lVar7 = (int64_t)(int)local_50;
      iVar9 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar9);
      if (*(int *)((int64_t)local_58 + 0xc) <= iVar9) break;
      local_68 = *(int64_t **)(local_58[2] + 8 + lVar7 * 8);
      lVar7 = local_68[2];
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      cVar5 = (**(code **)(*plVar11 + 0x50))();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      plVar4 = local_68;
      plVar10 = g_028adbe0;
      if (cVar5 != '\0') {
        if (g_028adbe0 != local_68) {
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          g_028adbe0 = plVar4;
          if (plVar10 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        if ((plVar4 != (int64_t *)0x0) && (g_028adbe8 == '\0')) {
          g_028adbe8 = '\x01';
          FUN_00e8cb90();
        }
        if ((char)local_38 != '\0') {
          uVar14 = FUN_00d6f370();
          lVar7 = g_027ce8b8;
          if (g_027ce8b8 != 0) {
            uVar14 = FUN_00d50b00();
          }
          local_b0 = lVar7;
          local_a8 = '\x01';
          FUN_00d6f570(uVar14,&local_b0);
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_01781450();
    FUN_00d50b20();
  }
  if (plVar11 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (g_028adbe0 == (int64_t *)0x0) {
    FUN_0177eb20();
    FUN_00d23310();
    plVar11 = local_68;
    pcVar8 = local_40;
    if (local_60[0] != '\0') {
      pcVar8 = local_60;
    }
    local_40[0] = local_60[0];
    *pcVar8 = '\0';
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar10 = g_028adbe0;
    if (g_028adbe0 != plVar11) {
      if (plVar11 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      g_028adbe0 = plVar11;
      if (plVar10 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((plVar11 != (int64_t *)0x0) && (g_028adbe8 == '\0')) {
      g_028adbe8 = '\x01';
      FUN_00e8cb90();
    }
    if ((local_40[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar14 = FUN_00d6f370();
    local_a0 = g_028adbe0[2];
    if (local_a0 != 0) {
      uVar14 = FUN_00d50b00();
    }
    lVar7 = g_027ce8b8;
    local_98 = '\x01';
    if (g_027ce8b8 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_90 = lVar7;
    local_88 = '\x01';
    FUN_00d6f570(uVar14,&local_90);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_0177f7eb:
  plVar11 = g_028adbe0;
  *(void*)(this_ptr + 1) = 0;
  if (plVar11 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  *this_ptr = plVar11;
  *(void*)(this_ptr + 1) = 1;
  return;
}

