// Function: FUN_016d23e0
// Address: 016d23e0
// Size: 6484 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_016d23e0(uint64_t param_1,int64_t *param_2,int param_3,char param_4)

{
  int64_t lVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  code *pcVar4;
  uint64_t uVar5;
  char cVar6;
  void*puVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int extraout_var;
  int iVar13;
  void *pvVar11;
  int extraout_var_00;
  uint64_t uVar12;
  int extraout_var_01;
  int extraout_var_02;
  int extraout_var_03;
  byte bVar14;
  void* pVar15;
  uint64_t uVar16;
  int64_t arg1;
  void*this_ptr;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  uint32_t uVar20;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_res8;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  uint64_t *local_100;
  uint64_t local_f8;
  char local_f0;
  uint32_t local_dc;
  uint64_t local_d8;
  uint64_t local_d0;
  uint64_t local_c8;
  char local_c0;
  uint64_t local_b8;
  uint64_t local_b0;
  uint64_t local_a8;
  void*local_a0;
  int64_t local_98;
  uint32_t local_8c;
  uint64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  uint64_t local_50;
  int iStack_3c;
  char local_38;
  
  uVar5 = local_80;
  local_b8 = param_1;
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  pcVar4 = g_02572370;
  local_a0 = puVar7;
  (*g_02572370)();
  if (((*(int *)(*param_2 + 0x10) != 0) && (*(int *)(*param_2 + 0x18) != 0)) &&
     (cVar6 = FUN_00e7c000(), cVar6 != '\0')) {
    *this_ptr = local_a0;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  FUN_016ce9f0(0);
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  uVar16 = uVar5;
  if (((*(int64_t *)(arg1 + 0x78) == 0) || (*(char *)(arg1 + 0x80) == '\0')) ||
     ((uint)local_b8 != 0x12)) {
    bVar19 = (uint)local_b8 == 4;
    if ((((uint)local_b8 < 5) && ((uint)local_b8 != 1)) || (((uint)local_b8 == 6 && (param_3 == 1)))
       ) {
      uVar12 = *(uint64_t *)(local_80 + 0xc);
      if (uVar12 >> 0x20 == 0) {
        uVar12 = FUN_00e7bdb0();
      }
      local_c8 = CONCAT44(local_c8._4_4_,1);
      FUN_00e7c260();
      uVar8 = FUN_00e7bdb0();
      uVar9 = uVar12;
      if (((uVar12 >> 0x20 != 0) && (uVar8 >> 0x20 != 0)) && (cVar6 = FUN_00e7c000(), cVar6 != '\0')
         ) {
        uVar9 = FUN_00e7bdb0();
      }
      *(uint64_t *)(local_80 + 0xc) = uVar9;
      local_80 = uVar12;
    }
    uVar17 = (uint)local_b8;
    bVar18 = uVar17 == 0xb;
    if (0x15 < uVar17) goto LAB_016d2650;
    if ((0x3de2U >> (uVar17 & 0x1f) & 1) == 0) {
      if (uVar17 == 0x15) {
        iVar13 = (int)(*(uint64_t *)(uVar5 + 0xc) >> 0x20);
        if (*(uint64_t *)(uVar5 + 0xc) >> 0x20 == 0) {
          FUN_00e7bdb0();
          iVar13 = extraout_var;
        }
        uVar12 = *(uint64_t *)(uVar5 + 0x14);
        if (uVar12 >> 0x20 == 0) {
          uVar12 = FUN_00e7bdb0();
        }
        else {
          local_b0 = CONCAT44(local_b0._4_4_,1);
          FUN_00e7c280();
          local_80 = uVar12;
        }
        local_c8 = uVar12;
        if (((iVar13 != 0) && (uVar12 >> 0x20 != 0)) && (cVar6 = FUN_00e7c000(), cVar6 != '\0'))
        goto LAB_016d269b;
      }
      goto LAB_016d2650;
    }
LAB_016d269b:
    uVar12 = *(uint64_t *)(uVar5 + 0x14);
    if (uVar12 >> 0x20 == 0) {
      uVar12 = FUN_00e7bdb0();
    }
    else {
      FUN_00e7c280();
    }
    local_b0 = CONCAT44(local_b0._4_4_,1);
    FUN_00e7c260();
    local_80 = FUN_00e7bdb0();
    if (((uVar12 >> 0x20 == 0) || (local_80 >> 0x20 == 0)) ||
       (cVar6 = FUN_00e7c000(), cVar6 == '\0')) {
      local_c8 = CONCAT44(local_c8._4_4_,1);
      FUN_00e7c260();
      local_80 = uVar12;
    }
    else {
      uVar12 = FUN_00e7bdb0();
    }
    *(uint64_t *)(uVar5 + 0x14) = uVar12;
    if (*(int *)(uVar5 + 0x10) != 0) goto LAB_016d277c;
LAB_016d27a2:
    local_100 = (uint64_t *)(uVar5 + 0xc);
    pVar15 = (void*)uVar16;
    if ((param_4 != '\0') || (*local_res8 != 0)) {
      FUN_016d8ab0();
      if ((local_78 == '\0') && (local_80 != 0)) {
        FUN_00d50b00();
      }
      local_d8 = local_80;
      if (*(int *)(local_80 + 0x10) == 0) {
LAB_016d28be:
        local_c8 = FUN_00e7bdb0();
LAB_016d2936:
        local_b0 = FUN_016cabc0();
        local_dc = 0;
      }
      else {
        if (*(int *)(local_80 + 0x18) == 0) {
LAB_016d28cf:
          pvVar11 = _pthread_getspecific(pVar15);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          if (*(uint64_t *)(local_80 + 0xc) >> 0x20 == 0) {
            FUN_00e7bdb0();
          }
          local_c8 = FUN_0165d690();
          goto LAB_016d2936;
        }
        uVar10 = FUN_00e7c000();
        if ((char)uVar10 == '\0') {
          if (*(int *)(local_80 + 0x10) == 0) goto LAB_016d28be;
          goto LAB_016d28cf;
        }
        local_dc = (uint32_t)CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
        local_d8 = 0;
        FUN_00d50b20();
      }
      local_d0 = *local_100;
      if (local_d0 >> 0x20 == 0) {
        local_d0 = FUN_00e7bdb0();
      }
      local_a8 = *(uint64_t *)(uVar5 + 0x14);
      uVar16 = local_a8 >> 0x20;
      if (uVar16 == 0) {
        local_a8 = FUN_00e7bdb0();
      }
      else {
        FUN_00e7c280();
      }
      uVar17 = (byte)(bVar18 | bVar19) | 2;
      local_98 = arg1 + 0x58;
      do {
        FUN_00e7c280();
        pvVar11 = _pthread_getspecific((void*)uVar16);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165d690();
        pvVar11 = _pthread_getspecific((void*)uVar16);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar6 = FUN_018fe5d0();
        uVar16 = CONCAT71((int7)(uVar16 >> 8),local_d8 == 0);
        if (((((cVar6 == '\0' && local_d8 != 0) && (extraout_var_00 != 0)) && (local_c8._4_4_ != 0))
            && ((cVar6 = FUN_00e7c020(), cVar6 != '\0' && (extraout_var_00 != 0)))) &&
           (local_b0._4_4_ != 0)) {
          cVar6 = FUN_00e7c020();
          pVar15 = (void*)uVar16;
          if (cVar6 != '\0') break;
        }
        FUN_00e7c280();
        pVar15 = (void*)uVar16;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
      local_80 = local_a8;
      if (local_d8 == 0) {
        FUN_00e7c260();
        pvVar11 = _pthread_getspecific(pVar15);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165d690();
        FUN_00e7c260();
        FUN_00e7c260();
        pvVar11 = _pthread_getspecific(pVar15);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165d690();
        FUN_00e7c260();
        uVar16 = local_a8;
        FUN_00e7c260();
        pvVar11 = _pthread_getspecific(pVar15);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165d690();
        local_80._4_4_ = (uint32_t)(uVar16 >> 0x20);
        local_80 = CONCAT44(local_80._4_4_,1);
        FUN_00e7c260();
      }
      else {
        FUN_00e7c260();
        pvVar11 = _pthread_getspecific(pVar15);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar16 = FUN_0165d690();
        if (((uVar16 >> 0x20 == 0) || (local_c8._4_4_ == 0)) ||
           ((cVar6 = FUN_00e7c020(), cVar6 == '\0' ||
            (((iStack_3c = (int)(uVar16 >> 0x20), iStack_3c == 0 || (local_b0._4_4_ == 0)) ||
             (cVar6 = FUN_00e7c020(), cVar6 == '\0')))))) {
          FUN_00e7c260();
          local_80 = local_a8;
          FUN_00e7c260();
          pvVar11 = _pthread_getspecific(pVar15);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar16 = FUN_0165d690();
          if (((uVar16 >> 0x20 == 0) || (local_c8._4_4_ == 0)) ||
             (((cVar6 = FUN_00e7c020(), cVar6 == '\0' ||
               ((iStack_3c = (int)(uVar16 >> 0x20), iStack_3c == 0 || (local_b0._4_4_ == 0)))) ||
              (cVar6 = FUN_00e7c020(), cVar6 == '\0')))) {
            FUN_00e7c260();
            uVar16 = local_a8;
            local_80 = local_a8;
            FUN_00e7c260();
            pvVar11 = _pthread_getspecific(pVar15);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar12 = FUN_0165d690();
            if ((((uVar12 >> 0x20 == 0) || (local_c8._4_4_ == 0)) ||
                (cVar6 = FUN_00e7c020(), cVar6 == '\0')) ||
               (((iStack_3c = (int)(uVar12 >> 0x20), iStack_3c == 0 || (local_b0._4_4_ == 0)) ||
                (cVar6 = FUN_00e7c020(), cVar6 == '\0')))) {
              local_80._4_4_ = (uint32_t)(uVar16 >> 0x20);
              local_80 = CONCAT44(local_80._4_4_,1);
              FUN_00e7c260();
            }
          }
        }
      }
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_025fa538;
      uVar3 = _UNK_0239372c;
      uVar2 = _UNK_02393728;
      uVar20 = _UNK_02393724;
      *(void*)((int64_t)puVar7 + 0xc) = g_02393720;
      *(void*)(puVar7 + 2) = uVar20;
      *(void*)((int64_t)puVar7 + 0x14) = uVar2;
      *(void*)(puVar7 + 3) = uVar3;
      FUN_00d500e0();
      uVar20 = *(void*)(uVar5 + 0x10);
      uVar2 = *(void*)(uVar5 + 0x14);
      uVar3 = *(void*)(uVar5 + 0x18);
      *(void*)((int64_t)puVar7 + 0xc) = *(void*)local_100;
      *(void*)(puVar7 + 2) = uVar20;
      *(void*)((int64_t)puVar7 + 0x14) = uVar2;
      *(void*)(puVar7 + 3) = uVar3;
      if (local_d8 == 0) {
LAB_016d308f:
        uVar17 = (uint)local_b8;
        if (uVar17 - 0x12 < 3) goto LAB_016d330c;
        if (uVar17 != 1) {
          uVar16 = *(uint64_t *)((int64_t)puVar7 + 0x14);
          if (uVar16 >> 0x20 == 0) {
            uVar16 = FUN_00e7bdb0();
          }
          else {
            FUN_00e7c280();
            local_80 = uVar16;
          }
          if ((uVar16 >> 0x20 != 0) && (local_a8._4_4_ != 0)) {
            cVar6 = FUN_00e7c020();
            uVar17 = (uint)local_b8;
            if (cVar6 == '\0') goto LAB_016d330c;
            uVar16 = *(uint64_t *)((int64_t)puVar7 + 0x14);
            if (uVar16 >> 0x20 == 0) {
              uVar16 = FUN_00e7bdb0();
            }
            else {
              FUN_00e7c280();
            }
            local_8c = 1;
            FUN_00e7c260();
            local_80 = FUN_00e7bdb0();
            if (((uVar16 >> 0x20 == 0) || (local_80 >> 0x20 == 0)) ||
               (cVar6 = FUN_00e7c000(), cVar6 == '\0')) {
              FUN_00e7c260();
              local_80 = uVar16;
            }
            else {
              uVar16 = FUN_00e7bdb0();
            }
            *(uint64_t *)((int64_t)puVar7 + 0x14) = uVar16;
          }
          goto LAB_016d3305;
        }
      }
      else {
        uVar16 = *(uint64_t *)(uVar5 + 0x14);
        pVar15 = (void*)(uVar16 >> 0x20);
        if (uVar16 >> 0x20 == 0) {
          FUN_00e7bdb0();
        }
        else {
          local_8c = 1;
          FUN_00e7c280();
          local_80 = uVar16;
        }
        pvVar11 = _pthread_getspecific(pVar15);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar16 = FUN_0165d690();
        if (((uVar16 >> 0x20 == 0) || (local_c8._4_4_ == 0)) ||
           (cVar6 = FUN_00e7c020(), cVar6 != '\0')) goto LAB_016d308f;
        uVar16 = *(uint64_t *)(uVar5 + 0x14);
        pVar15 = (void*)(uVar16 >> 0x20);
        if (uVar16 >> 0x20 == 0) {
          FUN_00e7bdb0();
        }
        else {
          local_8c = 1;
          FUN_00e7c280();
          local_80 = uVar16;
        }
        pvVar11 = _pthread_getspecific(pVar15);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165d690();
        if (((extraout_var_01 == 0) || (local_b0._4_4_ == 0)) ||
           (cVar6 = FUN_00e7c020(), cVar6 != '\0')) goto LAB_016d308f;
LAB_016d3305:
        uVar17 = (uint)local_b8;
LAB_016d330c:
        if ((uVar17 < 0xc) && ((0x930U >> ((uint)local_b8 & 0x1f) & 1) != 0)) {
          uVar16 = *(uint64_t *)((int64_t)puVar7 + 0x14);
          if (uVar16 >> 0x20 == 0) {
            uVar16 = FUN_00e7bdb0();
          }
          else {
            FUN_00e7c280();
            local_80 = uVar16;
          }
          if (((uVar16 >> 0x20 != 0) && (local_d0._4_4_ != 0)) &&
             (cVar6 = FUN_00e7c020(), cVar6 != '\0')) {
            local_80 = *(uint64_t *)((int64_t)puVar7 + 0xc);
            if (local_80 >> 0x20 == 0) {
              local_80 = FUN_00e7bdb0();
            }
            FUN_00e7c280();
            uVar12 = FUN_00e7bdb0();
            uVar16 = local_80;
            if (((local_80 >> 0x20 != 0) && (uVar12 >> 0x20 != 0)) &&
               (cVar6 = FUN_00e7c000(), cVar6 != '\0')) {
              uVar16 = FUN_00e7bdb0();
            }
            *(uint64_t *)((int64_t)puVar7 + 0xc) = uVar16;
          }
        }
      }
      if (*local_res8 != 0) {
        iVar13 = (int)(*(uint64_t *)((int64_t)puVar7 + 0xc) >> 0x20);
        if (*(uint64_t *)((int64_t)puVar7 + 0xc) >> 0x20 == 0) {
          FUN_00e7bdb0();
          iVar13 = extraout_var_02;
        }
        FUN_00e7c280();
        local_80 = *(uint64_t *)((int64_t)puVar7 + 0x14);
        if (local_80 >> 0x20 == 0) {
          local_80 = FUN_00e7bdb0();
        }
        else {
          local_8c = 1;
          FUN_00e7c280();
        }
        local_8c = 2;
        uVar20 = FUN_00e7c260();
        if ((iVar13 != 0) && (local_d0._4_4_ != 0)) {
          FUN_00e7c020();
          uVar20 = extraout_XMM0_Da;
        }
        local_50._4_4_ = (int)(local_80 >> 0x20);
        bVar19 = local_50._4_4_ != 0;
        local_50 = local_80;
        if (((bVar19) && (local_a8._4_4_ != 0)) &&
           (cVar6 = FUN_00e7c020(), uVar20 = extraout_XMM0_Da_00, cVar6 != '\0')) {
          local_50 = local_a8;
        }
        FUN_016bf110(uVar20,local_50);
      }
      if (param_4 != '\0') {
        FUN_016d9380();
        uVar16 = local_a8;
        while( true ) {
          uVar12 = *(uint64_t *)((int64_t)puVar7 + 0x14);
          pVar15 = (void*)(uVar12 >> 0x20);
          if (uVar12 >> 0x20 == 0) {
            uVar12 = FUN_00e7bdb0();
          }
          else {
            local_8c = 1;
            FUN_00e7c280();
          }
          iStack_3c = (int)(uVar16 >> 0x20);
          uVar9 = local_d0;
          if (((iStack_3c == 0) || (uVar12 >> 0x20 == 0)) ||
             (cVar6 = FUN_00e7c020(), uVar9 = local_d0, cVar6 == '\0')) break;
          pvVar11 = _pthread_getspecific(pVar15);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0165d690();
          FUN_016da710();
          if ((local_138 != '\0') && (local_140 != 0)) {
            FUN_00d50b20();
          }
          FUN_00e7c280();
        }
        while( true ) {
          local_80 = *(uint64_t *)((int64_t)puVar7 + 0xc);
          pVar15 = (void*)(local_80 >> 0x20);
          if (local_80 >> 0x20 == 0) {
            local_80 = FUN_00e7bdb0();
          }
          iStack_3c = (int)(uVar9 >> 0x20);
          if (((iStack_3c == 0) || (local_80 >> 0x20 == 0)) ||
             (cVar6 = FUN_00e7c020(), cVar6 == '\0')) break;
          pvVar11 = _pthread_getspecific(pVar15);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0165d690();
          FUN_016da710();
          if ((local_128 != '\0') && (local_130 != 0)) {
            FUN_00d50b20();
          }
          FUN_00e7c260();
        }
      }
      FUN_00d50b20();
      bVar14 = (byte)local_dc | local_d8 == 0;
      pVar15 = CONCAT31((int3)((uint)local_dc >> 8),bVar14);
      if (bVar14 == 0) {
        FUN_00d50b20();
      }
    }
    if (((*(int64_t *)(arg1 + 0x78) != 0) && (*(char *)(arg1 + 0x80) != '\0')) &&
       ((uint)local_b8 == 0x12)) {
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_02572358;
      (*pcVar4)();
      if (local_a0 != (void*)0x0) {
        local_a0 = puVar7;
        FUN_00d50b20();
      }
      lVar1 = *(int64_t *)(arg1 + 0x78);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      *this_ptr = puVar7;
      *(void*)(this_ptr + 1) = 1;
      if (uVar5 == 0) {
        return this_ptr;
      }
      goto LAB_016d3d26;
    }
    pvVar11 = _pthread_getspecific(pVar15);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    if (*local_100 >> 0x20 == 0) {
      FUN_00e7bdb0();
    }
    pvVar11 = _pthread_getspecific(pVar15);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar10 = FUN_0165d690();
    pVar15 = 0;
    FUN_018fef60(0,uVar10);
    if ((local_78 == '\0') && (local_80 != 0)) {
      FUN_00d50b00();
    }
    pvVar11 = _pthread_getspecific(pVar15);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar15 = (void*)(*(uint64_t *)(uVar5 + 0x14) >> 0x20);
    if (*(uint64_t *)(uVar5 + 0x14) >> 0x20 == 0) {
      FUN_00e7bdb0();
    }
    else {
      local_c8 = CONCAT44(local_c8._4_4_,1);
      FUN_00e7c280();
    }
    pvVar11 = _pthread_getspecific(pVar15);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar10 = FUN_0165d690();
    pVar15 = 0;
    FUN_018fea90(0,uVar10);
    if ((local_78 == '\0') && (local_80 != 0)) {
      FUN_00d50b00();
    }
    if (local_80 == 0) goto LAB_016d3d11;
    if (local_80 != 0) {
      pvVar11 = _pthread_getspecific(pVar15);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      pvVar11 = _pthread_getspecific(pVar15);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar7 = (void*)FUN_019079b0();
      if (((extraout_var_03 != 0) && ((uint64_t)puVar7 >> 0x20 != 0)) &&
         (cVar6 = FUN_00e7c020(), cVar6 == '\0')) {
        pvVar11 = _pthread_getspecific(pVar15);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_b0 = local_80;
        local_d0 = local_80;
        FUN_00083ea0(2,&local_d0);
        uVar20 = FUN_016cef10();
        local_f8 = local_c8;
        local_f0 = 0;
        if (local_c0 == '\0') {
          if (local_c8 != 0) {
            uVar20 = FUN_00d50b00();
          }
        }
        else {
          local_c0 = '\0';
        }
        local_f0 = '\x01';
        FUN_01901690(uVar20,&local_f8);
        if (local_a0 == puVar7) {
LAB_016d3c76:
          if ((local_38 != '\0') && (puVar7 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_38 == '\0') {
            if (puVar7 != (void*)0x0) {
              FUN_00d50b00();
            }
            bVar19 = local_a0 != (void*)0x0;
            local_a0 = puVar7;
            if (bVar19) {
              FUN_00d50b20();
            }
            goto LAB_016d3c76;
          }
          bVar19 = local_a0 != (void*)0x0;
          local_a0 = puVar7;
          if (bVar19) {
            FUN_00d50b20();
            local_a0 = puVar7;
          }
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      if (local_80 == 0) goto LAB_016d3d11;
    }
    FUN_00d50b20();
  }
  else {
    if (*(uint64_t *)(local_80 + 0xc) >> 0x20 == 0) {
      FUN_00e7bdb0();
    }
    local_c8 = CONCAT44(local_c8._4_4_,1);
    FUN_00e7c260();
    local_80 = *(uint64_t *)(local_80 + 0x14);
    if (local_80 >> 0x20 == 0) {
      local_80 = FUN_00e7bdb0();
    }
    else {
      FUN_00e7c280();
    }
    FUN_00e7c260();
    FUN_016bf110();
    bVar18 = false;
    bVar19 = false;
LAB_016d2650:
    if (*(int *)(uVar5 + 0x10) == 0) goto LAB_016d27a2;
LAB_016d277c:
    if ((*(int *)(uVar5 + 0x18) == 0) || (cVar6 = FUN_00e7c000(), cVar6 == '\0')) goto LAB_016d27a2;
  }
LAB_016d3d11:
  *this_ptr = local_a0;
  *(void*)(this_ptr + 1) = 1;
LAB_016d3d26:
  FUN_00d50b20();
  return this_ptr;
}

