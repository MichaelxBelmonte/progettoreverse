// Function: FUN_006ca460
// Address: 006ca460
// Size: 2729 bytes
// Class: MDTrackInsp

void FUN_006ca460(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  bool bVar3;
  code *pcVar4;
  int64_t *plVar5;
  void *pvVar6;
  int64_t **pplVar7;
  int64_t lVar8;
  void*puVar9;
  void* pVar10;
  int64_t lVar11;
  int64_t **pplVar12;
  int iVar13;
  int iVar14;
  int64_t *this_ptr;
  int64_t *plVar15;
  char cVar16;
  bool bVar17;
  int local_ac;
  int64_t *local_78;
  int64_t *local_70;
  int64_t *local_68;
  uint64_t local_60;
  int local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  plVar5 = local_78;
  FUN_006cb500();
  if (((char)local_70 == '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*(int64_t *)this_ptr[0x26] + 0xb28))();
  if (((((char)local_70 == '\0') && (local_78 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), (char)local_70 != '\0')) && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  iVar14 = *(int *)((int64_t)local_78 + 0xc);
  if (iVar14 == 1) {
    FUN_00d23310();
    pVar10 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),(char)local_70);
    pplVar12 = &local_40;
    if ((char)local_70 != '\0') {
      pplVar12 = &local_70;
    }
    local_40 = (int64_t *)CONCAT71(local_40._1_7_,(char)local_70);
    *(void*)pplVar12 = 0;
    if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6040();
    if (((char)local_40 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar14 = *(int *)((int64_t)local_78 + 0xc);
  }
  if (iVar14 == 0) {
    local_ac = -1;
    (**(code **)(*(int64_t *)this_ptr[0x2a] + 0x998))();
  }
  else {
    FUN_00d23310();
    pplVar12 = &local_70;
    local_50 = (char)local_70;
    pplVar7 = (int64_t **)&local_50;
    if ((char)local_70 != '\0') {
      pplVar7 = pplVar12;
    }
    *(void*)pplVar7 = 0;
    if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific((void*)pplVar12);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e60a0();
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_50 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_70._0_1_ = '\0';
    local_78 = (int64_t *)0x0;
    local_68 = plVar5;
    local_60 = 0xffffffff;
    local_58 = 0;
    iVar14 = -1;
    local_60._4_4_ = 0;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar13 = -local_60._4_4_;
        }
        else {
          iVar13 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar13);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar13 = 0;
        }
        local_60 = CONCAT44(iVar13,(int)local_60);
      }
      lVar8 = (int64_t)(int)local_60;
      iVar13 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar13);
      if (*(int *)((int64_t)local_68 + 0xc) <= iVar13) break;
      lVar11 = local_68[2];
      local_78 = *(int64_t **)(lVar11 + 8 + lVar8 * 8);
      pvVar6 = _pthread_getspecific((void*)lVar11);
      pVar10 = (void*)lVar11;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      if (local_40 != (int64_t *)0x0) {
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e60a0();
      plVar15 = (int64_t *)CONCAT71(uStack_4f,local_50);
      if (local_48 == '\0') {
        cVar16 = plVar1 == (int64_t *)0x0;
        if (plVar15 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_006ca7d5;
        }
      }
      else {
        local_48 = '\0';
LAB_006ca7d5:
        cVar16 = plVar1 == (int64_t *)0x0 && plVar15 == (int64_t *)0x0;
        if ((plVar1 != (int64_t *)0x0) && (plVar15 != (int64_t *)0x0)) {
          local_38 = '\0';
          local_40 = plVar15;
          cVar16 = (**(code **)(*plVar1 + 0x50))();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (plVar15 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      if (cVar16 == '\0') {
        iVar14 = -2;
      }
    }
    FUN_000be170();
    bVar17 = iVar14 != -2;
    local_ac = (bVar17 - 2) + (uint)bVar17;
    if ((bVar17) && (plVar1 != (int64_t *)0x0)) {
      local_ac = FUN_0141b8d0();
      local_ac = local_ac + 1;
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_50 = '\0';
    plVar15 = this_ptr;
    local_40 = this_ptr;
    do {
      (**(code **)(*plVar15 + 0x370))();
      if (local_78 == plVar15) {
        if (((local_50 == '\0') && (local_78 != (int64_t *)0x0)) && ((char)local_70 != '\0'))
        goto LAB_006ca937;
      }
      else {
        local_40 = local_78;
        plVar15 = local_78;
        if ((char)local_70 == '\0') {
          if (local_50 == '\0') {
            pplVar12 = (int64_t **)&local_50;
          }
          else {
            FUN_00d50b20();
            pplVar12 = (int64_t **)&local_50;
          }
        }
        else {
          if (local_50 != '\0') {
            FUN_00d50b20();
          }
LAB_006ca937:
          local_50 = '\x01';
          pplVar12 = &local_70;
        }
        *(void*)pplVar12 = 0;
      }
      if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00082eb0();
      pplVar12 = (int64_t **)&g_02802688;
      if (plVar15 != (int64_t *)0x0) {
        (**(code **)(*plVar15 + 0x360))();
        cVar16 = FUN_00e85ea0();
        pplVar12 = &local_40;
        if (cVar16 == '\0') {
          pplVar12 = (int64_t **)&g_02802688;
        }
      }
      if (*pplVar12 != (int64_t *)0x0) {
        if ((local_50 == '\0') && (plVar15 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        break;
      }
    } while (plVar15 != (int64_t *)0x0);
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    bVar17 = true;
    if (plVar15 == (int64_t *)0x0) {
LAB_006cac83:
      bVar3 = false;
    }
    else {
      FUN_007646f0();
      if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pcVar4 = g_02572370;
      if (local_78 == (int64_t *)0x0) goto LAB_006cac83;
      local_70._0_1_ = '\0';
      local_78 = (int64_t *)0x0;
      local_68 = plVar5;
      local_60 = 0xffffffff;
      local_58 = 0;
      bVar3 = false;
      puVar9 = (void*)0x0;
      local_60._4_4_ = 0;
      while( true ) {
        if (local_60._4_4_ != 0) {
          if (local_60._4_4_ < 1) {
            iVar14 = -local_60._4_4_;
          }
          else {
            iVar14 = (int)local_60 - local_60._4_4_;
            local_60 = CONCAT44(local_60._4_4_,iVar14);
            FUN_00d23690();
            local_58 = local_58 + local_60._4_4_;
            iVar14 = 0;
          }
          local_60 = CONCAT44(iVar14,(int)local_60);
        }
        lVar8 = (int64_t)(int)local_60;
        iVar14 = (int)local_60 + 1;
        local_60 = CONCAT44(local_60._4_4_,iVar14);
        if (*(int *)((int64_t)local_68 + 0xc) <= iVar14) break;
        local_78 = *(int64_t **)(local_68[2] + 8 + lVar8 * 8);
        FUN_007646f0();
        FUN_012d2830();
        plVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          if (puVar9 == (void*)0x0) {
            puVar9 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar9 = &g_02572358;
            (*pcVar4)();
            bVar3 = true;
          }
          (**(code **)(*plVar2 + 0x658))();
          plVar2 = (int64_t *)CONCAT71(uStack_4f,local_50);
          if (local_48 == '\0') {
            if (plVar2 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_38 = '\0';
          local_40 = plVar2;
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      FUN_000be170();
      if (puVar9 != (void*)0x0) {
        if (plVar5 != (int64_t *)0x0) {
          FUN_00b2ada0();
          FUN_00d23310();
          pplVar12 = &local_70;
          if ((char)local_70 == '\0') {
            pplVar12 = &local_40;
          }
          local_40 = (int64_t *)CONCAT71(local_40._1_7_,(char)local_70);
          *(void*)pplVar12 = 0;
          if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00b33590();
          FUN_00b2b4a0();
          if (((char)local_40 != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00b2b3b0();
        }
        bVar17 = false;
      }
    }
    (**(code **)(*(int64_t *)this_ptr[0x2a] + 0x998))();
    if (plVar15 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (bVar3 && !bVar17) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (!bVar17) goto LAB_006cae63;
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00b2b1b0();
    if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_78 != (int64_t *)0x0) {
      FUN_00b2b080();
      FUN_00b2ad50();
    }
  }
LAB_006cae63:
  if (local_ac < -1) {
    FUN_01d6ed40();
    lVar8 = g_02726ce0;
    plVar1 = (int64_t *)this_ptr[0x2a];
    if (g_02726ce0 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x958))();
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01d6ed40();
  }
  FUN_006db470();
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}

