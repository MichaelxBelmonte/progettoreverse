// Function: FUN_00c99930
// Address: 00c99930
// Size: 6750 bytes
// Class: Unknown

void* FUN_00c99930(uint64_t param_1,int64_t *param_2,int64_t param_3)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  time_t tVar14;
  void*puVar15;
  int64_t lVar16;
  tm *ptVar17;
  int64_t *plVar18;
  uint32_t extraout_var;
  uint *puVar19;
  tm *ptVar20;
  void*arg1;
  void*this_ptr;
  int64_t lVar21;
  int64_t lVar22;
  uint uVar23;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar24;
  int64_t local_318;
  uint8_t local_310;
  uint64_t local_308;
  uint8_t local_300;
  int64_t *local_2f8;
  uint8_t local_2f0;
  int64_t local_2e8;
  uint8_t local_2e0;
  int64_t local_2d8;
  char local_2d0;
  uint64_t local_2c8;
  uint8_t local_2c0;
  int64_t local_2b8;
  uint8_t local_2b0;
  int64_t local_2a8;
  uint8_t local_2a0;
  double local_120;
  int64_t *local_e8;
  char local_e0;
  void*local_d8;
  uint64_t local_d0;
  uint64_t local_c8;
  uint local_c0;
  uint32_t local_bc;
  int local_b8;
  int local_b4;
  uint64_t local_b0;
  uint64_t uStack_a8;
  uint64_t local_a0;
  uint64_t uStack_98;
  int64_t *local_90;
  char local_88;
  uint local_80;
  uint local_7c;
  uint64_t local_78;
  int64_t *local_70;
  uint local_68;
  uint local_64;
  int64_t *local_60;
  uint local_44;
  int64_t local_40;
  int local_38;
  
  local_e0 = '\0';
  local_e8 = (int64_t *)0x0;
  FUN_00c94930(0);
  plVar5 = local_c8;
  if (((char)local_c0 == '\0') && (local_c8 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00ddb860();
  plVar6 = local_c8;
  if ((char)local_c0 == '\0') {
    if (local_c8 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_c0 = local_c0 & 0xffffff00;
  }
  local_70 = param_2;
  puVar15 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar15 = &g_02572358;
  (*g_02572370)();
  local_d8 = puVar15;
  while (cVar8 = (**(code **)(*plVar6 + 0x388))(), plVar18 = g_0276bc70, cVar8 == '\0') {
    local_88 = '\0';
    local_90 = (int64_t *)0x0;
    uVar24 = extraout_XMM0_Qa;
    if (g_0276bc70 != (int64_t *)0x0) {
      uVar24 = FUN_00d50b00();
    }
    (**(code **)(*plVar6 + 0x3c8))(uVar24,&local_90);
    if (plVar18 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_90 != (int64_t *)0x0) && (iVar12 = FUN_00d8c7a0(), iVar12 != 0)) {
      local_c8 = local_90;
      local_c0 = local_c0 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    cVar8 = (**(code **)(*plVar6 + 0x3d0))();
    plVar18 = local_90;
    lVar21 = g_02772fe8;
    if (cVar8 != '\0') {
      if (g_02772fe8 != 0) {
        FUN_00d50b00();
      }
      cVar8 = (**(code **)(*plVar18 + 0x50))();
      if (lVar21 != 0) {
        FUN_00d50b20();
      }
      plVar18 = g_0276bc70;
      if (cVar8 == '\0') {
        local_c8 = local_90;
        local_c0 = local_c0 & 0xffffff00;
        FUN_00d21140();
        if (((char)local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (g_0276bc70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_c8 = plVar18;
        local_c0 = local_c0 & 0xffffff00;
        FUN_00d21140();
        if (((char)local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar18 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00ddb860();
  plVar18 = local_c8;
  puVar15 = local_d8;
  if ((char)local_c0 == '\0') {
    if (local_c8 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_c0 = local_c0 & 0xffffff00;
  }
  local_60 = plVar18;
  local_88 = '\0';
  local_90 = (int64_t *)0x0;
  if (0 < *(int *)((int64_t)puVar15 + 0xc)) {
    local_120 = g_023908c8;
    local_d0 = 0x7fffffff;
    lVar22 = 0;
    local_38 = 0x7fffffff;
    local_7c = 0x7fffffff;
    local_44 = 0x7fffffff;
    local_64 = 0x7fffffff;
    local_68 = 0x7fffffff;
    local_80 = 0x7fffffff;
    lVar21 = 0;
    local_78 = 0;
    local_40 = 0;
    cVar8 = '\0';
    do {
      lVar16 = local_d8[2];
      lVar1 = *(int64_t *)(lVar16 + lVar22 * 8);
      if (lVar21 == lVar1) {
        if (((char)local_78 == '\0') && (lVar21 != 0)) {
          local_78 = CONCAT71((int7)((uint64_t)lVar16 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (lVar1 != 0) {
          lVar16 = FUN_00d50b00();
        }
        if (((char)local_78 == '\0') || (lVar21 == 0)) {
          local_78 = CONCAT71((int7)((uint64_t)lVar16 >> 8),1);
          lVar21 = lVar1;
        }
        else {
          uVar24 = FUN_00d50b20();
          local_78 = CONCAT71((int7)((uint64_t)uVar24 >> 8),1);
          lVar21 = lVar1;
        }
      }
      if (lVar22 < (int64_t)*(int *)((int64_t)local_d8 + 0xc) + -1) {
        lVar16 = *(int64_t *)(local_d8[2] + 8 + lVar22 * 8);
        if (local_40 == lVar16) {
          if ((cVar8 == '\0') && (local_40 != 0)) {
            cVar8 = '\x01';
            FUN_00d50b00();
          }
        }
        else {
          if (lVar16 != 0) {
            FUN_00d50b00();
          }
          if ((cVar8 == '\0') || (local_40 == 0)) {
            cVar8 = '\x01';
            local_40 = lVar16;
          }
          else {
            FUN_00d50b20();
            cVar8 = '\x01';
            local_40 = lVar16;
          }
        }
      }
      else {
        if (local_40 != 0) {
          if (cVar8 != '\0') {
            local_40 = 0;
            FUN_00d50b20();
            cVar8 = '\0';
            goto LAB_00c99ec0;
          }
          cVar8 = '\0';
        }
        local_40 = 0;
      }
LAB_00c99ec0:
      plVar18 = g_0276bc70;
      if (g_0276bc70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      cVar9 = FUN_00d90870();
      if (cVar9 == '\0') {
        if (plVar18 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_00c99d70;
      }
      iVar12 = FUN_00d8c7a0();
      if (plVar18 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (iVar12 != 2) goto LAB_00c99d70;
      sVar11 = FUN_00d8cbc0();
      puVar19 = &switchD_00c99f57::switchdataD_00c9c0dc;
      switch(sVar11 + -0x41) {
      case 0:
        FUN_00c968b0();
        plVar18 = local_c8;
        if (((char)local_c0 == '\0') && (local_c8 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        iVar12 = FUN_00c93590();
        if (plVar18 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (iVar12 != 0x7fffffff) {
          ptVar20 = _localtime((time_t *)puVar19);
          if (ptVar20 == (tm *)0x0) goto LAB_00c9a5a1;
LAB_00c9a000:
          iVar13 = ptVar20->tm_wday;
LAB_00c9a5a3:
          iVar13 = iVar13 - iVar12;
          iVar12 = iVar13 + 7;
          if (0 < iVar13) {
            iVar12 = iVar13;
          }
          iVar12 = iVar12 * -0x15180;
LAB_00c9a5b4:
          local_120 = (double)iVar12;
        }
        break;
      case 1:
        FUN_00c979f0();
        plVar18 = local_c8;
        if (((char)local_c0 == '\0') && (local_c8 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        iVar12 = FUN_00c93590();
        if (plVar18 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_00c9a4e5;
      case 3:
        uVar24 = FUN_00d95590();
        plVar18 = local_c8;
        if ((char)local_c0 == '\0') {
          if (local_c8 != (int64_t *)0x0) {
            uVar24 = FUN_00d50b00();
          }
        }
        else {
          local_c0 = local_c0 & 0xffffff00;
        }
        cVar9 = (**(code **)(*local_60 + 0x3c8))(uVar24,&local_e8);
        if (plVar18 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar16 = g_0270b790;
        if (cVar9 != '\0') {
          if (g_0270b790 != 0) {
            FUN_00d50b00();
          }
          cVar9 = FUN_00d90870();
          lVar1 = g_026fce10;
          cVar10 = '\x01';
          if (cVar9 == '\0') {
            if (g_026fce10 != 0) {
              FUN_00d50b00();
            }
            cVar10 = FUN_00d90870();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
          }
          if (lVar16 != 0) {
            FUN_00d50b20();
          }
          if (cVar10 != '\0') {
            iVar12 = FUN_00d8d560();
            iVar12 = iVar12 * 0x15180;
            goto LAB_00c9a5b4;
          }
        }
        break;
      case 7:
        local_44 = FUN_00c93450(&switchD_00c99f57::switchdataD_00c9c0dc,2);
        break;
      case 8:
        local_80 = FUN_00c93450(&switchD_00c99f57::switchdataD_00c9c0dc,2);
        break;
      case 0xc:
        local_68 = FUN_00c93450(&switchD_00c99f57::switchdataD_00c9c0dc,2);
        break;
      case 0x12:
        local_64 = FUN_00c93450(&switchD_00c99f57::switchdataD_00c9c0dc,2);
        break;
      case 0x18:
        if (((local_40 != 0) &&
            (cVar9 = (**(code **)(*local_60 + 0x3b0))
                               (&switchD_00c99f57::switchdataD_00c9c0dc,&local_e8), cVar9 != '\0'))
           || (cVar9 = (**(code **)(*local_60 + 0x3d0))(cVar8,&local_e8), cVar9 != '\0')) {
          local_7c = FUN_00d8d560();
        }
        break;
      case 0x20:
        FUN_00c97150();
        plVar18 = local_c8;
        if (((char)local_c0 == '\0') && (local_c8 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        iVar12 = FUN_00c93590();
        if (plVar18 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (iVar12 != 0x7fffffff) {
          ptVar20 = _localtime((time_t *)puVar19);
          if (ptVar20 != (tm *)0x0) goto LAB_00c9a000;
LAB_00c9a5a1:
          iVar13 = 0;
          goto LAB_00c9a5a3;
        }
        break;
      case 0x21:
        FUN_00c985c0();
        plVar18 = local_c8;
        if (((char)local_c0 == '\0') && (local_c8 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        iVar12 = FUN_00c93590();
        if (plVar18 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
LAB_00c9a4e5:
        local_38 = iVar12 + 1;
        if (iVar12 == 0x7fffffff) {
          local_38 = 0x7fffffff;
        }
        break;
      case 0x23:
        local_d0 = FUN_00c93450(&switchD_00c99f57::switchdataD_00c9c0dc,2);
        break;
      case 0x24:
        local_d0 = FUN_00c93450(&switchD_00c99f57::switchdataD_00c9c0dc,2);
        break;
      case 0x2c:
        local_38 = FUN_00c93450(&switchD_00c99f57::switchdataD_00c9c0dc,2);
        break;
      case 0x2f:
        (**(code **)(*local_60 + 0x3d0))(cVar8,&local_90);
        if (local_90 != (int64_t *)0x0) {
          FUN_00d99d60();
          cVar9 = local_88;
          plVar4 = local_90;
          plVar18 = local_c8;
          if (local_90 == local_c8) {
            if ((local_88 != '\0') || (local_c8 == (int64_t *)0x0)) goto LAB_00c9a762;
            if ((char)local_c0 == '\0') {
              FUN_00d50b00();
              goto LAB_00c9a75e;
            }
          }
          else {
            if ((char)local_c0 == '\0') {
              if (local_c8 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              local_90 = plVar18;
              if ((cVar9 != '\0') && (plVar4 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_00c9a75e:
              local_88 = '\x01';
LAB_00c9a762:
              if (((char)local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              break;
            }
            local_90 = local_c8;
            if ((local_88 != '\0') && (plVar4 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_88 = '\x01';
        }
        break;
      case 0x38:
        local_7c = FUN_00c93450(&switchD_00c99f57::switchdataD_00c9c0dc,2);
        if ((int)local_7c < 100) {
          if ((int)local_7c < 0x15) {
            local_7c = local_7c + 2000;
          }
          else {
            local_7c = local_7c + 0x76c;
          }
        }
      }
      if (local_40 != 0) {
        (**(code **)(*local_60 + 1000))(0,0);
      }
LAB_00c99d70:
      plVar18 = local_90;
      lVar16 = g_027730d8;
      lVar22 = lVar22 + 1;
    } while (lVar22 < *(int *)((int64_t)local_d8 + 0xc));
    if (!NAN(local_120)) {
      FUN_00c94930();
      plVar18 = local_c8;
      if (local_c8 == (int64_t *)0x0) {
        bVar3 = true;
        bVar2 = true;
        plVar18 = (int64_t *)0x0;
      }
      else {
        if ((char)local_c0 == '\0') {
          FUN_00d50b00();
        }
        bVar3 = false;
        bVar2 = false;
      }
      if ((param_3 != 0) && (bVar2 = bVar3, *local_70 != 0)) {
        FUN_00c99190();
      }
      *(void*)(this_ptr + 1) = 0;
      if ((bVar2) && (plVar18 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      *this_ptr = plVar18;
      *(void*)(this_ptr + 1) = 1;
      bVar2 = true;
      goto LAB_00c9ae61;
    }
    if ((local_80 != 0x7fffffff) && (0xc < local_80)) goto LAB_00c9ae4d;
    if ((local_80 == 0x7fffffff) || (local_44 = local_80, local_90 == (int64_t *)0x0)) {
LAB_00c9b2b7:
      if ((((((local_7c == 0x7fffffff) || (local_7c < 10000)) &&
            ((local_38 == 0x7fffffff || (local_38 - 1U < 0xc)))) &&
           (((int)local_d0 == 0x7fffffff || ((int)local_d0 - 1U < 0x1f)))) &&
          ((local_44 == 0x7fffffff || (local_44 < 0x19)))) &&
         (((local_68 == 0x7fffffff || (local_68 < 0x3d)) &&
          ((local_64 == 0x7fffffff || (local_64 < 0x3d)))))) goto LAB_00c9a8eb;
    }
    else {
      if (g_027730d8 != 0) {
        FUN_00d50b00();
      }
      cVar9 = (**(code **)(*plVar18 + 0x50))();
      if (lVar16 != 0) {
        FUN_00d50b20();
      }
      plVar18 = local_90;
      lVar22 = g_027730e0;
      local_44 = local_80;
      if (cVar9 != '\0') goto LAB_00c9b2b7;
      if (local_90 != (int64_t *)0x0) {
        if (g_027730e0 != 0) {
          FUN_00d50b00();
        }
        cVar9 = (**(code **)(*plVar18 + 0x50))();
        if (lVar22 != 0) {
          FUN_00d50b20();
        }
        if (cVar9 != '\0') {
          local_44 = local_80 + 0xc;
          goto LAB_00c9b2b7;
        }
      }
    }
LAB_00c9ae4d:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    bVar2 = true;
    plVar18 = (int64_t *)0x0;
    goto LAB_00c9ae61;
  }
  local_d0 = 0x7fffffff;
  lVar21 = 0;
  local_38 = 0x7fffffff;
  local_7c = 0x7fffffff;
  local_64 = 0x7fffffff;
  local_68 = 0x7fffffff;
  local_78 = 0;
  local_40 = 0;
  cVar8 = '\0';
  local_44 = 0x7fffffff;
LAB_00c9a8eb:
  cVar9 = FUN_00de21d0();
  uVar23 = local_7c;
  if (cVar9 == '\0') {
    local_38 = 1;
    uVar23 = 0x7b2;
  }
  local_d0 = local_d0 & 0xffffffff;
  if (cVar9 == '\0') {
    local_d0 = 1;
  }
  cVar9 = FUN_00de2300();
  lVar22 = g_02772fb8;
  if (cVar9 == '\0') {
    local_68 = 0;
    local_64 = 0;
    local_44 = 0;
  }
  ptVar20 = (tm *)(uint64_t)local_44;
  lVar16 = g_02772f98;
  if (uVar23 == 0x7fffffff) {
    if (g_02772fb8 != 0) {
      FUN_00d50b00();
    }
    cVar9 = FUN_00d90eb0();
    lVar16 = g_02772fb0;
    cVar10 = '\x01';
    if (cVar9 == '\0') {
      if (g_02772fb0 != 0) {
        FUN_00d50b00();
      }
      cVar10 = FUN_00d90eb0();
      if (lVar16 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar22 != 0) {
      FUN_00d50b20();
    }
    if (cVar10 != '\0') goto LAB_00c9ae4d;
    ptVar17 = _localtime(&ptVar20->tm_sec);
    lVar16 = g_02772f98;
    if (ptVar17 == (tm *)0x0) {
      uVar23 = 0;
    }
    else {
      uVar23 = ptVar17->tm_year + 0x76c;
    }
  }
  g_02772f98 = lVar16;
  if (local_38 == 0x7fffffff) {
    if (lVar16 != 0) {
      FUN_00d50b00();
    }
    cVar9 = FUN_00d90eb0();
    if (lVar16 != 0) {
      FUN_00d50b20();
    }
    if (cVar9 != '\0') goto LAB_00c9ae4d;
    ptVar17 = _localtime(&ptVar20->tm_sec);
    if (ptVar17 == (tm *)0x0) {
      local_38 = 0;
    }
    else {
      local_38 = ptVar17->tm_mon + 1;
    }
  }
  lVar22 = g_02772f60;
  if ((int)local_d0 == 0x7fffffff) {
    if (g_02772f60 != 0) {
      FUN_00d50b00();
    }
    cVar9 = FUN_00d90eb0();
    lVar16 = g_02772f70;
    cVar10 = '\x01';
    if (cVar9 == '\0') {
      if (g_02772f70 != 0) {
        FUN_00d50b00();
      }
      cVar10 = FUN_00d90eb0();
      if (lVar16 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar22 != 0) {
      FUN_00d50b20();
    }
    if (cVar10 != '\0') goto LAB_00c9ae4d;
    ptVar17 = _localtime(&ptVar20->tm_sec);
    if (ptVar17 == (tm *)0x0) {
      local_d0 = 0;
    }
    else {
      local_d0 = (uint64_t)(uint)ptVar17->tm_mday;
    }
  }
  lVar16 = g_02772fc0;
  lVar22 = g_02772fd8;
  if (local_44 == 0x7fffffff) {
    if (g_02772fc0 != 0) {
      FUN_00d50b00();
    }
    cVar9 = FUN_00d90eb0();
    lVar22 = g_027e3b70;
    cVar10 = '\x01';
    if (cVar9 == '\0') {
      if (g_027e3b70 != 0) {
        FUN_00d50b00();
      }
      cVar10 = FUN_00d90eb0();
      if (lVar22 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar16 != 0) {
      FUN_00d50b20();
    }
    if (cVar10 != '\0') goto LAB_00c9ae4d;
    ptVar17 = _localtime(&ptVar20->tm_sec);
    lVar22 = g_02772fd8;
    if (ptVar17 == (tm *)0x0) {
      local_44 = 0;
    }
    else {
      local_44 = ptVar17->tm_hour;
    }
  }
  g_02772fd8 = lVar22;
  if (local_68 == 0x7fffffff) {
    if (lVar22 != 0) {
      FUN_00d50b00();
    }
    cVar9 = FUN_00d90eb0();
    if (lVar22 != 0) {
      FUN_00d50b20();
    }
    if (cVar9 != '\0') goto LAB_00c9ae4d;
    ptVar17 = _localtime(&ptVar20->tm_sec);
    if (ptVar17 == (tm *)0x0) {
      local_68 = 0;
    }
    else {
      local_68 = ptVar17->tm_min;
    }
  }
  lVar22 = g_02772fe0;
  if (local_64 == 0x7fffffff) {
    if (g_02772fe0 != 0) {
      FUN_00d50b00();
    }
    cVar9 = FUN_00d90eb0();
    if (lVar22 != 0) {
      FUN_00d50b20();
    }
    if (cVar9 != '\0') goto LAB_00c9ae4d;
    ptVar17 = _localtime(&ptVar20->tm_sec);
    if (ptVar17 == (tm *)0x0) {
      local_64 = 0;
    }
    else {
      local_64 = ptVar17->tm_sec;
    }
  }
  plVar18 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar18 = (int64_t)&g_02568770;
  FUN_00d500e0();
  local_b0 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b4 = uVar23 - 0x76c;
  local_b8 = local_38 + -1;
  local_bc = (uint32_t)local_d0;
  local_c8 = (int64_t *)CONCAT44(local_68,local_64);
  uStack_a8 = 0xffffffff;
  local_c0 = local_44;
  tVar14 = _mktime(ptVar20);
  plVar18[2] = CONCAT44(extraout_var,tVar14);
  local_318 = *local_70;
  local_310 = 0;
  local_308 = 0;
  local_300 = 0;
  uVar24 = FUN_00c94a50(&local_308,&local_318);
  plVar7 = local_c8;
  cVar9 = local_e0;
  plVar4 = local_e8;
  if (local_e8 == local_c8) {
    if ((local_e0 == '\0') && (local_c8 != (int64_t *)0x0)) {
      if ((char)local_c0 == '\0') {
        uVar24 = FUN_00d50b00();
      }
      goto LAB_00c9b0a7;
    }
    if (((char)local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
      uVar24 = FUN_00d50b20();
    }
  }
  else {
    if ((char)local_c0 == '\0') {
      if (local_c8 != (int64_t *)0x0) {
        uVar24 = FUN_00d50b00();
      }
      local_e8 = plVar7;
      if ((cVar9 != '\0') && (plVar4 != (int64_t *)0x0)) {
        uVar24 = FUN_00d50b20();
      }
    }
    else {
      local_e8 = local_c8;
      if ((local_e0 != '\0') && (plVar4 != (int64_t *)0x0)) {
        uVar24 = FUN_00d50b20();
      }
    }
LAB_00c9b0a7:
    local_e0 = '\x01';
  }
  plVar7 = local_70;
  local_2f8 = local_e8;
  local_2f0 = 0;
  local_2e8 = *local_70;
  local_2e0 = 0;
  uVar24 = FUN_00c930a0(uVar24,&local_2e8);
  plVar4 = local_c8;
  local_2c8 = *arg1;
  local_2c0 = 0;
  local_2b8 = *plVar7;
  local_2b0 = 0;
  uVar24 = FUN_00c930a0(uVar24,&local_2b8);
  if ((local_2d0 == '\0') && (local_2d8 != 0)) {
    uVar24 = FUN_00d50b00();
  }
  iVar12 = FUN_00d92590(uVar24,1);
  if (local_2d8 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_c0 != '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar12 == 0) {
    if ((param_3 != 0) && (*local_70 != 0)) {
      local_2a0 = 0;
      local_2a8 = *local_70;
      FUN_00c99190();
    }
    *this_ptr = plVar18;
    *(void*)(this_ptr + 1) = 1;
    bVar2 = true;
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    bVar2 = false;
  }
LAB_00c9ae61:
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_60 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar2 && plVar18 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((cVar8 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_78 != '\0') && (lVar21 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

