// Function: FUN_0055b680
// Address: 0055b680
// Size: 4114 bytes
// Class: MDAudioTrackItem
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


uint FUN_0055b680(uint64_t param_1)

{
  int64_t *plVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  void* in_ECX;
  void* pVar12;
  int64_t *plVar13;
  int64_t lVar14;
  uint64_t uVar15;
  int64_t **pplVar16;
  int iVar17;
  int64_t *this_ptr;
  undefined7 uVar18;
  uint64_t uVar19;
  double dVar20;
  double dVar21;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  uint64_t local_c8;
  int64_t *local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  int64_t *local_90;
  uint64_t local_88;
  int64_t *local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  int64_t local_60;
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  char local_38 [8];
  
  local_c8 = param_1;
  FUN_01bc84c0();
  FUN_01bc5d70();
  local_98 = local_68;
  if ((char)local_60 == '\0') {
    if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_60 != '\0')) &&
       (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60._0_1_ = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_002ee280();
  plVar1 = local_68;
  if ((char)local_60 == '\0') {
    if (local_68 == (int64_t *)0x0) goto LAB_0055b7e0;
    FUN_00d50b00();
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar17 = *(int *)((int64_t)plVar1 + 0xc);
  }
  else {
    if (local_68 == (int64_t *)0x0) {
LAB_0055b7e0:
      uVar3 = 0;
      goto LAB_0055c63f;
    }
    iVar17 = *(int *)((int64_t)local_68 + 0xc);
  }
  if (iVar17 != 0) {
    local_b0 = plVar1;
    FUN_00d23340();
    plVar1 = local_68;
    plVar13 = &local_78;
    if ((char)local_60 != '\0') {
      plVar13 = &local_60;
    }
    local_78 = CONCAT71(local_78._1_7_,(char)local_60);
    *(void*)plVar13 = 0;
    if (((char)local_60 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar5 = FUN_00e8b990();
    if (lVar5 == 0) {
      cVar2 = '\0';
    }
    else {
      FUN_00d23340();
      plVar13 = local_68;
      local_a8._0_1_ = (char)local_60;
      plVar11 = &local_a8;
      if ((char)local_60 != '\0') {
        plVar11 = &local_60;
      }
      *(void*)plVar11 = 0;
      if (((char)local_60 != '\0') && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      cVar2 = FUN_00cb2340();
      if (((char)local_a8 != '\0') && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (((char)local_78 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_01be80e0();
      plVar1 = local_68;
      if (((((char)local_60 == '\0') && (local_68 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), (char)local_60 != '\0')) && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23310();
      plVar11 = local_68;
      local_38[0] = (char)local_60;
      plVar13 = &local_60;
      plVar10 = (int64_t *)local_38;
      if ((char)local_60 != '\0') {
        plVar10 = plVar13;
      }
      *(char *)plVar10 = '\0';
      if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar12 = (void*)plVar13;
      pvVar4 = _pthread_getspecific(pVar12);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar4 = _pthread_getspecific(pVar12);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e8920();
      pvVar4 = _pthread_getspecific(pVar12);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      lVar5 = local_78;
      if (local_70 == '\0') {
        if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_70 = '\0';
      }
      if ((local_a0 != '\0') && (CONCAT71(local_a8._1_7_,(char)local_a8) != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar6 = FUN_00e7bdb0();
      FUN_01bf03a0();
      plVar13 = local_68;
      if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar13 != (int64_t *)0x0) {
        FUN_01bf03a0();
        uVar6 = FUN_01a905b0();
        if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_e0 = (int64_t *)0x0;
      FUN_00243390();
      local_d0 = local_68;
      if (((((char)local_60 == '\0') && (local_68 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), (char)local_60 != '\0')) && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_60._0_1_ = '\0';
      local_68 = (int64_t *)0x0;
      local_58 = local_b0;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_50._4_4_ = 0;
      while( true ) {
        if (local_50._4_4_ != 0) {
          if (local_50._4_4_ < 1) {
            iVar17 = -local_50._4_4_;
          }
          else {
            iVar17 = (int)local_50 - local_50._4_4_;
            local_50 = CONCAT44(local_50._4_4_,iVar17);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar17 = 0;
          }
          local_50 = CONCAT44(iVar17,(int)local_50);
        }
        lVar7 = (int64_t)(int)local_50;
        iVar17 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar17);
        if (*(int *)((int64_t)local_58 + 0xc) <= iVar17) break;
        lVar14 = local_58[2];
        local_68 = *(int64_t **)(lVar14 + 8 + lVar7 * 8);
        pvVar4 = _pthread_getspecific((void*)lVar14);
        pVar12 = (void*)lVar14;
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012641c0();
        lVar7 = local_78;
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          pvVar4 = _pthread_getspecific(pVar12);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012641c0();
          lVar7 = CONCAT71(local_a8._1_7_,(char)local_a8);
          if (local_a0 == '\0') {
            if (lVar7 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0 = '\0';
          }
          local_70 = '\0';
          local_78 = lVar7;
          FUN_00d235a0();
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (CONCAT71(local_a8._1_7_,(char)local_a8) != 0)) {
            FUN_00d50b20();
          }
        }
        pvVar4 = _pthread_getspecific(pVar12);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012640f0();
        lVar7 = local_78;
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          pvVar4 = _pthread_getspecific(pVar12);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012640f0();
          lVar7 = CONCAT71(local_a8._1_7_,(char)local_a8);
          if (local_a0 == '\0') {
            if (lVar7 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0 = '\0';
          }
          local_70 = '\0';
          local_78 = lVar7;
          FUN_00d235a0();
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (CONCAT71(local_a8._1_7_,(char)local_a8) != 0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_001159b0();
      FUN_01be8270();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_c8 = FUN_01e437f0(local_c8);
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar19 = (**(code **)(*plVar1 + 0x388))(local_c8);
      local_80 = (int64_t *)0x0;
      local_90 = (int64_t *)0x0;
      local_40 = (int64_t *)0x0;
      local_88 = 0;
      plVar13 = (int64_t *)0x0;
      uVar3 = 0;
      uVar9 = 0;
      do {
        uVar9 = uVar9 & 0xffffffff;
        plVar11 = plVar13;
        do {
          uVar8 = (**(code **)(*this_ptr + 0x658))();
          plVar13 = local_68;
          cVar2 = (char)uVar9;
          if (local_68 == plVar11) {
            plVar13 = plVar11;
            local_c8 = uVar9;
            if ((cVar2 == '\0') && (local_68 != (int64_t *)0x0)) {
              if ((char)local_60 != '\0') goto LAB_0055bf73;
              local_c8 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
              FUN_00d50b00();
            }
          }
          else if ((char)local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              uVar8 = FUN_00d50b00();
            }
            local_c8 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
            if ((cVar2 != '\0') && (plVar11 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if ((cVar2 != '\0') && (plVar11 != (int64_t *)0x0)) {
              uVar8 = FUN_00d50b20();
            }
LAB_0055bf73:
            local_60._0_1_ = '\0';
            local_c8 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
          }
          if (plVar13 == (int64_t *)0x0) {
            if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_0055c5e4:
            if (local_d0 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            goto LAB_0055c633;
          }
          iVar17 = FUN_01d3a5a0();
          if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar17 == 6) {
            if ((char)local_c8 != '\0') {
              FUN_00d50b20();
            }
            goto LAB_0055c5e4;
          }
          iVar17 = FUN_01d3a5a0();
          uVar9 = local_c8 & 0xffffffff;
          plVar11 = plVar13;
        } while (iVar17 != 5);
        uVar15 = local_c8;
        cVar2 = (**(code **)(*plVar1 + 0x3c8))();
        pVar12 = (void*)uVar15;
        uVar18 = (undefined7)(uVar9 >> 8);
        if ((cVar2 == '\0') || (uVar9 = FUN_01d3b590(), (uVar9 & 8) != 0)) {
          FUN_01be8120();
          plVar11 = local_68;
          if (local_68 == local_40) {
            if (((char)local_88 == '\0') && (local_68 != (int64_t *)0x0)) {
              if ((char)local_60 != '\0') goto LAB_0055c197;
              uVar9 = CONCAT71(uVar18,1);
              FUN_00d50b00();
              plVar11 = local_80;
            }
            else {
              uVar9 = local_88 & 0xffffffff;
              plVar11 = local_80;
            }
          }
          else {
            if ((char)local_60 != '\0') {
              local_e0 = local_68;
              uVar9 = CONCAT71(uVar18,1);
              if (((char)local_88 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_0055c127;
              FUN_00d50b20();
              local_90 = plVar11;
              local_40 = plVar11;
              goto LAB_0055c245;
            }
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_e0 = plVar11;
            uVar9 = CONCAT71(uVar18,1);
            if (((char)local_88 == '\0') || (local_40 == (int64_t *)0x0)) {
              local_90 = plVar11;
              local_40 = plVar11;
            }
            else {
              FUN_00d50b20();
              local_90 = plVar11;
              local_40 = plVar11;
            }
          }
          if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_01be8160();
          plVar11 = local_68;
          if (local_68 == local_40) {
            if (((char)local_88 == '\0') && (local_40 != (int64_t *)0x0)) {
              if ((char)local_60 != '\0') {
LAB_0055c197:
                uVar9 = CONCAT71(uVar18,1);
                plVar11 = local_80;
                goto LAB_0055c245;
              }
              uVar9 = CONCAT71(uVar18,1);
              FUN_00d50b00();
              plVar11 = local_80;
            }
            else {
              uVar9 = local_88 & 0xffffffff;
              plVar11 = local_80;
            }
          }
          else {
            if ((char)local_60 != '\0') {
              local_e0 = local_68;
              uVar9 = CONCAT71(uVar18,1);
              if (((char)local_88 == '\0') || (local_40 == (int64_t *)0x0)) {
LAB_0055c127:
                uVar9 = CONCAT71(uVar18,1);
                plVar11 = local_68;
                local_e0 = local_68;
                local_90 = local_68;
                local_40 = local_68;
              }
              else {
                FUN_00d50b20();
                local_90 = plVar11;
                local_40 = plVar11;
              }
              goto LAB_0055c245;
            }
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_e0 = plVar11;
            uVar9 = CONCAT71(uVar18,1);
            if (((char)local_88 == '\0') || (local_40 == (int64_t *)0x0)) {
              local_90 = plVar11;
              local_40 = plVar11;
            }
            else {
              FUN_00d50b20();
              local_90 = plVar11;
              local_40 = plVar11;
            }
          }
          if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_0055c245:
        local_88 = uVar9;
        local_80 = plVar11;
        FUN_01d3abf0();
        uVar8 = FUN_01e466c0();
        FUN_01be8270();
        FUN_00d50b00();
        uVar8 = FUN_01e437f0(uVar8);
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar8 = (**(code **)(*plVar1 + 0x388))(uVar8);
        if ((char)uVar3 != '\0') {
          FUN_00d23340();
          plVar11 = local_68;
          local_78 = CONCAT71(local_78._1_7_,(char)local_60);
          plVar10 = &local_60;
          if ((char)local_60 == '\0') {
            plVar10 = &local_78;
          }
          *(void*)plVar10 = 0;
          if (((char)local_60 != '\0') && (plVar11 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific(pVar12);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          plVar10 = (int64_t *)FUN_00e8b990();
          (**(code **)(*plVar10 + 0x3b8))();
          if (((char)local_78 != '\0') && (plVar11 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00083c20();
        pplVar16 = (int64_t **)&g_02802688;
        if (local_40 != (int64_t *)0x0) {
          (**(code **)(*local_40 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar16 = &local_e0;
          if (cVar2 == '\0') {
            pplVar16 = (int64_t **)&g_02802688;
          }
        }
        if (*pplVar16 == (int64_t *)0x0) {
          dVar20 = (double)(**(code **)(*local_40 + 0x370))(uVar8);
          pVar12 = (void*)pplVar16;
          dVar21 = (double)(**(code **)(*local_40 + 0x370))(uVar19);
          FUN_0127f970(dVar20 - dVar21);
        }
        else {
          plVar11 = (int64_t *)FUN_01a8fc90(uVar8);
          local_78 = FUN_01a8fc90(uVar19);
          local_68 = plVar11;
          FUN_00e7b970();
          pVar12 = 0;
          FUN_01278f90(0,uVar6);
        }
        FUN_00d23340();
        plVar11 = local_68;
        local_78 = CONCAT71(local_78._1_7_,(char)local_60);
        plVar10 = &local_60;
        if ((char)local_60 == '\0') {
          plVar10 = &local_78;
        }
        *(void*)plVar10 = 0;
        if (((char)local_60 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(pVar12);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        plVar10 = (int64_t *)FUN_00e8b990();
        uVar3 = (**(code **)(*plVar10 + 0x3c0))();
        uVar9 = local_c8;
        if (((char)local_78 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
          uVar9 = local_c8;
        }
      } while( true );
    }
  }
  uVar3 = 0;
LAB_0055c633:
  FUN_00d50b20();
LAB_0055c63f:
  if (local_98 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return uVar3 & 0xffffff01;
}

