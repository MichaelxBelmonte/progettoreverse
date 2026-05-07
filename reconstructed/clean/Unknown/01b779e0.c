// Function: FUN_01b779e0
// Address: 01b779e0
// Size: 4298 bytes
// Class: Unknown

uint64_t FUN_01b779e0(uint32_t param_1)

{
  code *pcVar1;
  int64_t ***ppplVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int64_t ****pppplVar7;
  void*puVar8;
  int64_t ****pppplVar9;
  void *pvVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t ****pppplVar13;
  uint64_t uVar14;
  int64_t lVar15;
  void* pVar16;
  int64_t ***ppplVar17;
  int64_t *arg1;
  int64_t ****this_ptr;
  int64_t ****pppplVar18;
  int64_t ***ppplVar19;
  bool bVar20;
  bool bVar21;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  int64_t local_160;
  uint8_t local_158;
  int64_t local_150;
  uint8_t local_148;
  int64_t ***local_140;
  uint8_t local_138;
  uint64_t local_130;
  uint64_t local_128;
  uint32_t uStack_120;
  uint32_t uStack_11c;
  uint64_t local_118;
  int64_t ***local_110;
  uint64_t local_108;
  int64_t local_100;
  char local_f8;
  uint32_t local_f0;
  float local_ec;
  uint64_t local_e8;
  uint32_t uStack_e0;
  uint32_t uStack_dc;
  int64_t local_d8;
  char local_d0;
  int64_t ***local_c8;
  int64_t ***local_c0;
  uint64_t local_b8;
  void*local_b0;
  void*local_a8;
  uint64_t local_a0;
  int iStack_8c;
  uint64_t local_88;
  int64_t ***local_80;
  int64_t **local_78;
  int64_t ***local_70;
  uint64_t local_68;
  int local_60;
  int64_t ***local_58;
  char local_50;
  char local_38 [8];
  
  pppplVar18 = (int64_t ****)local_80;
  local_160 = *arg1;
  if (local_160 == 0) {
    uVar12 = 0;
    goto LAB_01b78af7;
  }
  local_158 = 0;
  pppplVar13 = this_ptr;
  FUN_01b74680(param_1,&local_160);
  if (((char)local_78 == '\0') && ((int64_t ****)local_80 != (int64_t ****)0x0)) {
    FUN_00d50b00();
  }
  pppplVar7 = (int64_t ****)(*(*this_ptr)[0x13b])();
  local_a0 = (int64_t ****)(*(*this_ptr)[0x13c])();
  local_88._4_4_ = (int)((uint64_t)pppplVar7 >> 0x20);
  if ((local_88._4_4_ == 0) || ((uint64_t)local_a0 >> 0x20 == 0)) {
LAB_01b77a98:
    local_f0 = 0xffffffff;
    local_d0 = '\0';
    local_d8 = 0;
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    local_b0 = puVar8;
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_02572358;
    (*pcVar1)();
    local_a8 = puVar8;
    pppplVar9 = (int64_t ****)FUN_00e8fc40();
    FUN_00d4ff40();
    *pppplVar9 = (int64_t ***)&g_02572358;
    (*pcVar1)();
    local_e8._0_4_ = 0.0;
    local_c0 = (int64_t ***)pppplVar9;
    while( true ) {
      pVar16 = (void*)pppplVar13;
      ppplVar17 = this_ptr[0x2b];
      if (ppplVar17 != (int64_t ***)0x0) {
        FUN_00d50b00();
      }
      pvVar10 = _pthread_getspecific(pVar16);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      pppplVar13 = local_a0;
      cVar3 = FUN_01252960(local_a0,pppplVar7,&local_d8,&local_130);
      if (ppplVar17 != (int64_t ***)0x0) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') break;
      if (((local_d8 != 0) && (local_130 >> 0x20 != 0)) && (local_118 >> 0x20 != 0)) {
        FUN_00dd67f0();
        ppplVar17 = local_58;
        if (local_50 == '\0') {
          if ((int64_t ****)local_58 != (int64_t ****)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_78._0_1_ = '\0';
        FUN_00d21140();
        if (((char)local_78 != '\0') && ((int64_t ****)ppplVar17 != (int64_t ****)0x0)) {
          FUN_00d50b20();
        }
        if ((int64_t ****)ppplVar17 != (int64_t ****)0x0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && ((int64_t ****)local_58 != (int64_t ****)0x0)) {
          FUN_00d50b20();
        }
        FUN_00dd67f0();
        local_80 = local_58;
        if (local_50 == '\0') {
          if ((int64_t ****)local_58 != (int64_t ****)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_78._0_1_ = '\0';
        FUN_00d21140();
        if (((char)local_78 != '\0') && ((int64_t ****)local_80 != (int64_t ****)0x0)) {
          FUN_00d50b20();
        }
        if ((int64_t ****)local_80 != (int64_t ****)0x0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && ((int64_t ****)local_58 != (int64_t ****)0x0)) {
          FUN_00d50b20();
        }
        local_100 = local_d8;
        local_f8 = '\0';
        uVar11 = FUN_00d21140();
        local_e8._0_4_ = (float)CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
        if ((local_f8 != '\0') && (local_100 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    if (((uint)(float)local_e8 & 1) == 0) {
LAB_01b78a7f:
      uVar12 = 0;
    }
    else {
      FUN_00d23310();
      pppplVar13 = (int64_t ****)&local_78;
      local_b8 = (int64_t ****)CONCAT71(local_b8._1_7_,(char)local_78);
      pppplVar9 = (int64_t ****)&local_b8;
      if ((char)local_78 != '\0') {
        pppplVar9 = pppplVar13;
      }
      *(void*)pppplVar9 = 0;
      if (((char)local_78 != '\0') && ((int64_t ****)local_80 != (int64_t ****)0x0)) {
        FUN_00d50b20();
      }
      local_58 = (int64_t ***)FUN_00dd6320();
      bVar4 = 1;
      if ((((uint64_t)local_58 >> 0x20 != 0) && (local_88._4_4_ != 0)) &&
         (cVar3 = FUN_00e7c000(), cVar3 != '\0')) {
        FUN_00d23340();
        local_38[0] = (char)local_78;
        pppplVar13 = (int64_t ****)&local_78;
        pppplVar9 = (int64_t ****)local_38;
        if ((char)local_78 != '\0') {
          pppplVar9 = pppplVar13;
        }
        *(void*)pppplVar9 = 0;
        if (((char)local_78 != '\0') && ((int64_t ****)local_80 != (int64_t ****)0x0)) {
          FUN_00d50b20();
        }
        uVar12 = FUN_00dd6320();
        bVar4 = 1;
        if ((uVar12 >> 0x20 != 0) && (local_a0._4_4_ != 0)) {
          bVar4 = FUN_00e7c000();
          bVar4 = bVar4 ^ 1;
        }
        if ((local_38[0] != '\0') && ((int64_t ****)local_80 != (int64_t ****)0x0)) {
          FUN_00d50b20();
        }
      }
      if (((char)local_b8 != '\0') && ((int64_t ****)local_80 != (int64_t ****)0x0)) {
        FUN_00d50b20();
      }
      local_88 = pppplVar7;
      if (bVar4 != 0) {
        FUN_00d23310();
        local_58 = (int64_t ***)CONCAT71(local_58._1_7_,(char)local_78);
        pppplVar13 = (int64_t ****)&local_78;
        if ((char)local_78 == '\0') {
          pppplVar13 = &local_58;
        }
        *(void*)pppplVar13 = 0;
        if (((char)local_78 != '\0') && ((int64_t ****)local_80 != (int64_t ****)0x0)) {
          FUN_00d50b20();
        }
        pppplVar7 = (int64_t ****)FUN_00dd6320();
        if (((char)local_58 != '\0') && ((int64_t ****)local_80 != (int64_t ****)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d23340();
        pppplVar13 = (int64_t ****)&local_78;
        pppplVar9 = &local_58;
        if ((char)local_78 != '\0') {
          pppplVar9 = pppplVar13;
        }
        local_58 = (int64_t ***)CONCAT71(local_58._1_7_,(char)local_78);
        *(void*)pppplVar9 = 0;
        if (((char)local_78 != '\0') && ((int64_t ****)local_80 != (int64_t ****)0x0)) {
          FUN_00d50b20();
        }
        local_a0 = (int64_t ****)FUN_00dd6320();
        if (((char)local_58 != '\0') && ((int64_t ****)local_80 != (int64_t ****)0x0)) {
          FUN_00d50b20();
        }
        local_88._4_4_ = (int)((uint64_t)pppplVar7 >> 0x20);
        bVar20 = local_88._4_4_ != 0;
        local_88 = pppplVar7;
        if ((bVar20) && (local_a0._4_4_ != 0)) {
          cVar3 = FUN_00e7c000();
          if (cVar3 != '\0') goto LAB_01b78a7f;
        }
      }
      FUN_01d3abf0();
      local_128 = FUN_01e466c0();
      uStack_120 = extraout_XMM0_Dc;
      uStack_11c = extraout_XMM0_Dd;
      local_ec = (float)(*(*this_ptr)[0x14d])();
      local_ec = (float)local_128 - local_ec;
      (*(*pppplVar18)[0x79])((float)local_128 - local_ec);
      local_b8 = (int64_t ****)FUN_01a8fc90();
      local_110 = (int64_t ***)0x0;
      uStack_e0 = uStack_120;
      uStack_dc = uStack_11c;
      bVar20 = false;
      local_e8 = local_128;
LAB_01b78020:
      (*(*this_ptr)[0xcb])();
      pppplVar7 = (int64_t ****)*arg1;
      if (pppplVar7 == (int64_t ****)local_80) {
        if (((char)arg1[1] != '\0') || ((int64_t ****)local_80 == (int64_t ****)0x0))
        goto LAB_01b78090;
        if ((char)local_78 != '\0') goto LAB_01b78081;
        FUN_00d50b00();
LAB_01b780d3:
        *(void*)(arg1 + 1) = 1;
        if (*arg1 == 0) goto LAB_01b78a0e;
LAB_01b780ea:
        uVar5 = FUN_01d3a5a0();
        pppplVar7 = (int64_t ****)(uint64_t)uVar5;
        if (((char)local_78 != '\0') && ((int64_t ****)local_80 != (int64_t ****)0x0)) {
          FUN_00d50b20();
        }
        if (uVar5 == 6) goto LAB_01b78a22;
        iVar6 = FUN_01d3a5a0();
        if (iVar6 == 5) {
          local_150 = *arg1;
          local_148 = 0;
          FUN_01b74680(extraout_XMM0_Da,&local_150);
          if ((int64_t ****)local_80 == pppplVar18) {
            if (((char)local_78 != '\0') && ((int64_t ****)local_80 != (int64_t ****)0x0)) {
              FUN_00d50b20();
            }
          }
          else if ((char)local_78 == '\0') {
            if ((int64_t ****)local_80 != (int64_t ****)0x0) {
              FUN_00d50b00();
            }
            bVar21 = pppplVar18 != (int64_t ****)0x0;
            pppplVar18 = (int64_t ****)local_80;
            if (bVar21) {
              FUN_00d50b20();
            }
          }
          else {
            bVar21 = pppplVar18 != (int64_t ****)0x0;
            pppplVar18 = (int64_t ****)local_80;
            if (bVar21) {
              FUN_00d50b20();
            }
          }
          FUN_01d3abf0();
          uVar11 = FUN_01e466c0();
          uStack_e0 = extraout_XMM0_Dc_00;
          uStack_dc = extraout_XMM0_Dd_00;
          local_e8 = uVar11;
          if ((*(char *)((int64_t)this_ptr + 0x1b1) == '\0') &&
             (g_02390d2c < (float)((uint)((float)uVar11 - (float)local_128) & g_02390140))) {
            if (this_ptr[0x3a] != (int64_t ***)0x0) {
              FUN_01e1e360();
              if (this_ptr[0x3a] != (int64_t ***)0x0) {
                this_ptr[0x3a] = (int64_t ***)0x0;
                FUN_00d50b20();
              }
            }
            *(void*)((int64_t)this_ptr + 0x1b1) = 1;
            FUN_00e7bdb0();
            pppplVar13 = (int64_t ****)CONCAT71((int7)((uint64_t)pppplVar13 >> 8),1);
            local_110 = (int64_t ***)pppplVar13;
            FUN_01b74770();
          }
          (*(*pppplVar18)[0x79])((float)local_e8 - local_ec);
          pppplVar7 = (int64_t ****)FUN_01a8fc90();
          if (((uint64_t)pppplVar7 >> 0x20 != 0) && (local_b8._4_4_ != 0)) {
            cVar3 = FUN_00e7c000();
            if (cVar3 != '\0') goto LAB_01b78020;
          }
          pVar16 = (void*)pppplVar13;
          if (bVar20) {
            ppplVar17 = this_ptr[0x2b];
            if (ppplVar17 != (int64_t ***)0x0) {
              FUN_00d50b00();
            }
            pvVar10 = _pthread_getspecific(pVar16);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            puVar8 = (void*)FUN_00e8b990();
            pppplVar13 = (int64_t ****)*puVar8;
            cVar3 = (*pppplVar13[0x78])();
            if (ppplVar17 != (int64_t ***)0x0) {
              FUN_00d50b20();
            }
            if (cVar3 != '\0') {
              ppplVar17 = this_ptr[0x2b];
              if (ppplVar17 != (int64_t ***)0x0) {
                FUN_00d50b00();
              }
              pvVar10 = _pthread_getspecific((void*)pppplVar13);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              puVar8 = (void*)FUN_00e8b990();
              pppplVar13 = (int64_t ****)*puVar8;
              (*pppplVar13[0x77])();
              if (ppplVar17 != (int64_t ***)0x0) {
                FUN_00d50b20();
              }
            }
            iStack_8c = (int)((uint64_t)pppplVar7 >> 0x20);
            if ((iStack_8c != 0) && (local_88._4_4_ != 0)) {
              cVar3 = FUN_00e7c000();
              if (cVar3 != '\0') {
                (*(*this_ptr)[0x13e])(extraout_XMM0_Da_00,local_a0);
                bVar20 = false;
                local_b8 = pppplVar7;
                goto LAB_01b78020;
              }
            }
          }
          pppplVar13 = local_a0;
          FUN_00e7b970();
          local_58 = (int64_t ***)pppplVar13;
          FUN_00e7b820();
          (*(*this_ptr)[0x13e])();
          if (*(char *)((int64_t)this_ptr + 0x1b4) == '\0') {
            pppplVar13 = this_ptr;
            local_b8 = pppplVar7;
            if (((uint64_t)pppplVar7 >> 0x20 == 0) || (local_88._4_4_ == 0)) {
LAB_01b784fa:
              pVar16 = (void*)pppplVar13;
              ppplVar17 = this_ptr[0x2b];
              if (ppplVar17 != (int64_t ***)0x0) {
                FUN_00d50b00();
              }
              pvVar10 = _pthread_getspecific(pVar16);
              ppplVar19 = ppplVar17;
              if (pvVar10 != (void *)0x0) {
                lVar15 = FUN_00e8b990();
                if (lVar15 != 0) {
                  ppplVar19 = (int64_t ***)
                              ppplVar17[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
                }
              }
              local_58 = (int64_t ***)CONCAT44(local_58._4_4_,1);
              local_80 = (int64_t ***)local_88;
              FUN_00e7c280();
              FUN_012521f0(local_88,0,0,0);
              local_38[0] = (char)local_78;
              pppplVar13 = (int64_t ****)local_38;
              pppplVar7 = (int64_t ****)&local_78;
              if ((char)local_78 == '\0') {
                pppplVar7 = pppplVar13;
              }
              *(void*)pppplVar7 = 0;
              if (((char)local_78 != '\0') && (local_88 != (int64_t ****)0x0)) {
                FUN_00d50b20();
              }
              if (local_88 == (int64_t ****)0x0) {
                pppplVar9 = (int64_t ****)0x0;
                uVar11 = 0;
              }
              else {
                uVar11 = CONCAT71((int7)((uint64_t)ppplVar19 >> 8),1);
                pppplVar9 = local_88;
                if (local_38[0] == '\0') {
                  FUN_00d50b00();
                }
              }
              if (ppplVar17 != (int64_t ***)0x0) {
                FUN_00d50b20();
              }
            }
            else {
              cVar3 = FUN_00e7c020();
              pVar16 = (void*)pppplVar13;
              if (cVar3 == '\0') goto LAB_01b784fa;
              ppplVar17 = this_ptr[0x2b];
              if (ppplVar17 != (int64_t ***)0x0) {
                FUN_00d50b00();
              }
              pvVar10 = _pthread_getspecific(pVar16);
              ppplVar19 = ppplVar17;
              if (pvVar10 != (void *)0x0) {
                lVar15 = FUN_00e8b990();
                if (lVar15 != 0) {
                  ppplVar19 = (int64_t ***)
                              ppplVar17[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
                }
              }
              pppplVar9 = local_a0;
              local_58 = (int64_t ***)CONCAT44(local_58._4_4_,1);
              local_80 = (int64_t ***)local_a0;
              FUN_00e7c260();
              FUN_012521f0(pppplVar9,0,0,0);
              local_38[0] = (char)local_78;
              pppplVar13 = (int64_t ****)local_38;
              pppplVar7 = (int64_t ****)&local_78;
              if ((char)local_78 == '\0') {
                pppplVar7 = pppplVar13;
              }
              *(void*)pppplVar7 = 0;
              if (((char)local_78 != '\0') && (pppplVar9 != (int64_t ****)0x0)) {
                FUN_00d50b20();
              }
              if (pppplVar9 == (int64_t ****)0x0) {
                pppplVar9 = (int64_t ****)0x0;
                uVar11 = 0;
              }
              else {
                uVar11 = CONCAT71((int7)((uint64_t)ppplVar19 >> 8),1);
                if (local_38[0] == '\0') {
                  FUN_00d50b00();
                }
              }
              if (ppplVar17 != (int64_t ***)0x0) {
                FUN_00d50b20();
              }
            }
            if (pppplVar9 == (int64_t ****)0x0) goto LAB_01b78a7f;
          }
          else {
            uVar11 = 0;
            pppplVar9 = (int64_t ****)0x0;
            pppplVar13 = this_ptr;
            local_b8 = pppplVar7;
            local_80 = (int64_t ***)pppplVar7;
          }
          local_108 = uVar11;
          if ((int64_t ****)local_c0 != (int64_t ****)0x0) {
            local_78._0_1_ = 0;
            local_70 = local_c0;
            local_68._0_4_ = -1;
            local_68._4_4_ = 0;
            local_60 = 0;
            local_c8 = (int64_t ***)pppplVar9;
            while( true ) {
              if (local_68._4_4_ != 0) {
                if (local_68._4_4_ < 1) {
                  local_68._4_4_ = -local_68._4_4_;
                }
                else {
                  local_68._0_4_ = (int)local_68 - local_68._4_4_;
                  FUN_00d23690();
                  local_60 = local_60 + local_68._4_4_;
                  local_68._4_4_ = 0;
                }
              }
              local_68._0_4_ = (int)local_68 + 1;
              if (*(int *)((int64_t)local_70 + 0xc) <= (int)local_68) break;
              pVar16 = (void*)local_70[2];
              ppplVar17 = this_ptr[0x2b];
              if (ppplVar17 != (int64_t ***)0x0) {
                FUN_00d50b00();
              }
              pvVar10 = _pthread_getspecific(pVar16);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar11 = FUN_00dd6320();
              uVar14 = FUN_00dd6320();
              pppplVar9 = (int64_t ****)local_c8;
              local_58 = local_c8;
              local_50 = '\0';
              FUN_012502a0(uVar14,uVar11);
              if ((local_50 != '\0') && ((int64_t ****)local_58 != (int64_t ****)0x0)) {
                FUN_00d50b20();
              }
              if (ppplVar17 != (int64_t ***)0x0) {
                FUN_00d50b20();
              }
            }
            FUN_00083b20();
            local_78._0_1_ = '\0';
            local_80 = (int64_t ***)0x0;
            local_70 = local_c0;
            local_68 = 0xffffffff;
            local_60 = 0;
            local_68._4_4_ = 0;
            while( true ) {
              if (local_68._4_4_ != 0) {
                if (local_68._4_4_ < 1) {
                  iVar6 = -local_68._4_4_;
                }
                else {
                  iVar6 = (int)local_68 - local_68._4_4_;
                  local_68 = CONCAT44(local_68._4_4_,iVar6);
                  FUN_00d23690();
                  local_60 = local_60 + local_68._4_4_;
                  iVar6 = 0;
                }
                local_68 = CONCAT44(iVar6,(int)local_68);
              }
              lVar15 = (int64_t)(int)local_68;
              iVar6 = (int)local_68 + 1;
              local_68 = CONCAT44(local_68._4_4_,iVar6);
              if (*(int *)((int64_t)local_70 + 0xc) <= iVar6) break;
              ppplVar17 = (int64_t ***)local_70[2];
              local_80 = (int64_t ***)ppplVar17[lVar15 + 1];
              ppplVar19 = this_ptr[0x2b];
              if (ppplVar19 != (int64_t ***)0x0) {
                FUN_00d50b00();
              }
              pvVar10 = _pthread_getspecific((void*)ppplVar17);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_58 = (int64_t ***)FUN_00dd6320();
              FUN_00e7b970();
              FUN_00e7b820();
              ppplVar17 = local_58;
              local_58 = (int64_t ***)FUN_00dd6320();
              FUN_00e7b970();
              FUN_00e7b820();
              ppplVar2 = local_58;
              local_50 = '\0';
              local_58 = local_80;
              FUN_012502a0(ppplVar2,ppplVar17);
              pppplVar9 = (int64_t ****)local_c8;
              if ((local_50 != '\0') && ((int64_t ****)local_58 != (int64_t ****)0x0)) {
                FUN_00d50b20();
              }
              if (ppplVar19 != (int64_t ***)0x0) {
                FUN_00d50b20();
              }
            }
            pppplVar13 = (int64_t ****)local_70;
            FUN_00083b20();
          }
          bVar20 = true;
          if (((char)local_108 != '\0') && (pppplVar9 != (int64_t ****)0x0)) {
            FUN_00d50b20();
          }
        }
        goto LAB_01b78020;
      }
      lVar15 = arg1[1];
      if ((char)local_78 == '\0') {
        if ((int64_t ****)local_80 != (int64_t ****)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)local_80;
        if (((char)lVar15 != '\0') && (pppplVar7 != (int64_t ****)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01b780d3;
      }
      *arg1 = (int64_t)local_80;
      if (((char)lVar15 != '\0') && (pppplVar7 != (int64_t ****)0x0)) {
        FUN_00d50b20();
      }
LAB_01b78081:
      *(void*)(arg1 + 1) = 1;
      local_78._0_1_ = '\0';
LAB_01b78090:
      if (*arg1 != 0) goto LAB_01b780ea;
LAB_01b78a0e:
      pppplVar7 = (int64_t ****)local_80;
      if (((char)local_78 != '\0') && ((int64_t ****)local_80 != (int64_t ****)0x0)) {
        FUN_00d50b20();
      }
LAB_01b78a22:
      if (*(char *)((int64_t)this_ptr + 0x1b1) != '\0') {
        local_138 = 0;
        local_140 = (int64_t ***)pppplVar18;
        (*(*pppplVar18)[0x79])((float)local_e8);
        FUN_01b753d0();
        FUN_01b74770();
        *(void*)((int64_t)this_ptr + 0x1b1) = 0;
        pppplVar7 = this_ptr;
      }
      if (((uint64_t)local_110 & 1) == 0) goto LAB_01b78a7f;
      (*(*this_ptr)[0x14a])();
      uVar12 = CONCAT71((int7)((uint64_t)pppplVar7 >> 8),1);
      FUN_01b80000();
    }
    if ((int64_t ****)local_c0 != (int64_t ****)0x0) {
      FUN_00d50b20();
    }
    if (local_a8 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (local_b0 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    cVar3 = FUN_00e7c000();
    if (cVar3 == '\0') goto LAB_01b77a98;
    uVar12 = 0;
  }
  if (pppplVar18 != (int64_t ****)0x0) {
    FUN_00d50b20();
  }
LAB_01b78af7:
  return uVar12 & 0xffffffff;
}

