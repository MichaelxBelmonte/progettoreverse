// Function: FUN_018598b0
// Address: 018598b0
// Size: 6789 bytes
// Class: Unknown

void FUN_018598b0(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  byte *pbVar5;
  int64_t lVar6;
  code *pcVar7;
  code *pcVar8;
  int64_t lVar9;
  int64_t lVar10;
  char cVar11;
  void*puVar12;
  int64_t *plVar13;
  void *pvVar14;
  int iVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  byte bVar19;
  bool bVar20;
  uint32_t uVar21;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint64_t local_68;
  uint32_t uStack_60;
  uint64_t local_48;
  uint32_t uStack_40;
  
  lVar10 = (int64_t)local_68;
  lVar3 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  FUN_018d8840();
  if (((char)uStack_60 == '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  uVar1 = *(uint *)((int64_t)local_68 + 0xc);
  puVar12 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = &g_02572358;
  pcVar8 = g_02572370;
  (*g_02572370)();
  bVar20 = g_028afc28 == (void*)0x0;
  g_028afc28 = puVar12;
  if (((bVar20) || (FUN_00d50b20(), g_028afc28 != (void*)0x0)) && (g_028afc30 == '\0')) {
    g_028afc30 = '\x01';
    FUN_00e8cb90();
  }
  FUN_00c8e690();
  if (((char)uStack_60 == '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar4 = g_028afc38;
  if (((int64_t *)g_028afc38 != local_68) && (g_028afc38 = (int64_t)local_68, lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 != (int64_t *)0x0) {
    if (g_028afc40 == '\0') {
      g_028afc40 = '\x01';
      FUN_00e8cb90();
    }
    if (local_68 != (int64_t *)0x0 && (int64_t *)lVar4 == local_68) {
      FUN_00d50b20();
    }
  }
  puVar12 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = &g_02572358;
  (*pcVar8)();
  bVar20 = g_028afc48 == (void*)0x0;
  g_028afc48 = puVar12;
  if (((bVar20) || (FUN_00d50b20(), g_028afc48 != (void*)0x0)) && (g_028afc50 == '\0')) {
    g_028afc50 = '\x01';
    FUN_00e8cb90();
  }
  puVar12 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = &g_02572358;
  (*pcVar8)();
  bVar20 = g_028afc58 == (void*)0x0;
  g_028afc58 = puVar12;
  if (((bVar20) || (FUN_00d50b20(), g_028afc58 != (void*)0x0)) && (g_028afc60 == '\0')) {
    g_028afc60 = '\x01';
    FUN_00e8cb90();
  }
  puVar12 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = &g_02572358;
  uVar21 = (*pcVar8)();
  bVar20 = g_028afc68 == (void*)0x0;
  g_028afc68 = puVar12;
  if (((bVar20) || (uVar21 = FUN_00d50b20(), g_028afc68 != (void*)0x0)) &&
     (g_028afc70 == '\0')) {
    g_028afc70 = '\x01';
    uVar21 = FUN_00e8cb90();
  }
  if (0 < (int)uVar1) {
    uVar18 = 0;
    do {
      lVar4 = *(int64_t *)(*(int64_t *)((int64_t)local_68 + 0x10) + uVar18 * 8);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      FUN_018e1cf0();
      if (((char)uStack_60 == '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      pbVar5 = *(byte **)((int64_t)local_68 + 0x10);
      pvVar14 = *(void **)(g_028afc38 + 0x10);
      *(uint *)((int64_t)pvVar14 + uVar18 * 4) =
           (uint)pbVar5[0xb] +
           (uint)pbVar5[10] +
           (uint)pbVar5[9] +
           (uint)pbVar5[8] +
           (uint)pbVar5[7] +
           (uint)pbVar5[6] +
           (uint)pbVar5[5] +
           (uint)pbVar5[4] + (uint)pbVar5[3] + (uint)pbVar5[2] + (uint)pbVar5[1] + (uint)*pbVar5;
      FUN_00c8e690();
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      if (3 < (int)*(uint *)((int64_t)local_68 + 0x18)) {
        _memset_pattern16(pvVar14,(void *)((uint64_t)
                                           ((*(uint *)((int64_t)local_68 + 0x18) >> 2) - 1) * 4 + 4
                                          ),param_3);
      }
      uStack_60._0_1_ = '\0';
      FUN_00d21140();
      **(void**)((int64_t)local_68 + 0x10) = 0x3f800000;
      if ((*(char *)(*(int64_t *)((int64_t)local_68 + 0x10) + 7) == '\0') &&
         (*(char *)(*(int64_t *)((int64_t)local_68 + 0x10) + 6) != '\0')) {
        *(void*)(*(int64_t *)((int64_t)local_68 + 0x10) + 0x18) = 0x3f800000;
      }
      if (*(char *)(*(int64_t *)((int64_t)local_68 + 0x10) + 7) != '\0') {
        *(void*)(*(int64_t *)((int64_t)local_68 + 0x10) + 0x1c) = 0x3f800000;
      }
      FUN_00d50b20();
      uVar21 = FUN_00d50b20();
      if (lVar4 != 0) {
        uVar21 = FUN_00d50b20();
      }
      uVar18 = uVar18 + 1;
    } while (uVar1 != uVar18);
  }
  pcVar7 = g_025683d8;
  if (0 < (int)uVar1) {
    uVar18 = 0;
    do {
      lVar4 = *(int64_t *)(*(int64_t *)(lVar10 + 0x10) + uVar18 * 8);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      lVar6 = *(int64_t *)(g_028afc28[2] + uVar18 * 8);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      plVar13 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar13 = (int64_t)&g_02572358;
      (*pcVar8)();
      uStack_60 = 0;
      FUN_00d21140();
      FUN_00d227d0();
      FUN_00d21370();
      FUN_018d8750();
      lVar9 = g_027d6a30;
      if (g_027d6a30 != 0) {
        FUN_00d50b00();
      }
      cVar11 = (**(code **)(*plVar13 + 0x50))();
      uVar21 = extraout_XMM0_Da;
      if (lVar9 != 0) {
        uVar21 = FUN_00d50b20();
      }
      local_68 = plVar13;
      if (cVar11 == '\0') {
        FUN_018d8750();
        lVar9 = g_027eb090;
        if (g_027eb090 != 0) {
          FUN_00d50b00();
        }
        cVar11 = (**(code **)(*plVar13 + 0x50))();
        uVar21 = extraout_XMM0_Da_00;
        if (lVar9 != 0) {
          uVar21 = FUN_00d50b20();
        }
        if (cVar11 == '\0') {
          uVar16 = 0;
LAB_0185acbe:
          if (*(char *)(*(int64_t *)(lVar6 + 0x10) + uVar16) != '\0') {
            puVar12 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar12 = &g_025683c0;
            (*pcVar7)();
            FUN_00c92170();
            FUN_00c92160();
            FUN_00d21140();
            bVar19 = 0;
            uVar17 = uVar16 & 0xffffffff;
            do {
              iVar15 = (int)uVar17;
              if (*(char *)(*(int64_t *)(lVar6 + 0x10) + (int64_t)iVar15) != '\0') {
                if (!(bool)(bVar19 & 1)) {
                  iVar2 = *(int *)(puVar12 + 3);
                  FUN_00c8e340(*(int64_t *)(lVar6 + 0x10),1);
                  *(int *)(puVar12[2] + (int64_t)iVar2) = iVar15;
                }
                if (0xf < *(int *)(puVar12 + 3)) goto LAB_0185aca0;
                bVar19 = bVar19 + 1;
              }
              iVar15 = iVar15 + 1;
              uVar17 = (uint64_t)
                       (iVar15 + (((uint)(iVar15 / 6 + (iVar15 >> 0x1f)) >> 1) - (iVar15 >> 0x1f)) *
                                 -0xc);
            } while( true );
          }
          uVar21 = FUN_00d21140();
          goto LAB_0185acb0;
        }
        uVar16 = 0;
        do {
          if (*(char *)(*(int64_t *)(lVar6 + 0x10) + uVar16) == '\0') {
            local_68 = (int64_t *)0x0;
            uStack_60 = 0;
            uVar21 = FUN_00d21140();
          }
          else {
            switch(uVar16 & 0xffffffff) {
            case 0:
              local_68 = (int64_t *)CONCAT44(_UNK_02417264,g_02417260);
              uStack_60 = _UNK_02417268;
              FUN_00c8e2b0(&switchD_0185a7d1::switchdataD_0185c970,0x14);
              if (((char)uStack_40 == '\0') && (local_48 != 0)) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              FUN_00c92160();
              uStack_40 = 0;
              uVar21 = FUN_00d21140();
              if (local_48 != 0) {
                uVar21 = FUN_00d50b20();
              }
              break;
            case 2:
              uStack_40 = g_0241727c;
              local_48 = g_02417274;
              FUN_00c8e2b0(&switchD_0185a7d1::switchdataD_0185c970,0xc);
              if (((char)uStack_60 == '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              FUN_00c92160();
              uStack_60 = 0;
              uVar21 = FUN_00d21140();
              if (local_68 != (int64_t *)0x0) {
                uVar21 = FUN_00d50b20();
              }
              break;
            case 3:
              local_48 = CONCAT44(_UNK_024171b4,g_024171b0);
              uStack_40 = _UNK_024171b8;
              FUN_00c8e2b0(&switchD_0185a7d1::switchdataD_0185c970,0x10);
              if (((char)uStack_60 == '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              FUN_00c92160();
              uStack_60 = 0;
              uVar21 = FUN_00d21140();
              if (local_68 != (int64_t *)0x0) {
                uVar21 = FUN_00d50b20();
              }
              break;
            case 5:
              local_48 = CONCAT44(_UNK_024171c4,g_024171c0);
              uStack_40 = _UNK_024171c8;
              FUN_00c8e2b0(&switchD_0185a7d1::switchdataD_0185c970,0x10);
              if (((char)uStack_60 == '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              FUN_00c92160();
              uStack_60 = 0;
              uVar21 = FUN_00d21140();
              if (local_68 != (int64_t *)0x0) {
                uVar21 = FUN_00d50b20();
              }
              break;
            case 7:
              local_48 = CONCAT44(_UNK_024171d4,g_024171d0);
              uStack_40 = _UNK_024171d8;
              FUN_00c8e2b0(&switchD_0185a7d1::switchdataD_0185c970,0x10);
              if (((char)uStack_60 == '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              FUN_00c92160();
              uStack_60 = 0;
              uVar21 = FUN_00d21140();
              if (local_68 != (int64_t *)0x0) {
                uVar21 = FUN_00d50b20();
              }
              break;
            case 9:
              local_48 = CONCAT44(_UNK_024171e4,g_024171e0);
              uStack_40 = _UNK_024171e8;
              FUN_00c8e2b0(&switchD_0185a7d1::switchdataD_0185c970,0x10);
              if (((char)uStack_60 == '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              FUN_00c92160();
              uStack_60 = 0;
              uVar21 = FUN_00d21140();
              if (local_68 != (int64_t *)0x0) {
                uVar21 = FUN_00d50b20();
              }
              break;
            case 10:
              local_48 = CONCAT44(_UNK_024171f4,g_024171f0);
              uStack_40 = _UNK_024171f8;
              FUN_00c8e2b0(&switchD_0185a7d1::switchdataD_0185c970,0x10);
              if (((char)uStack_60 == '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              FUN_00c92160();
              uStack_60 = 0;
              uVar21 = FUN_00d21140();
              if (local_68 != (int64_t *)0x0) {
                uVar21 = FUN_00d50b20();
              }
            }
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 != 0xc);
      }
      else {
        uVar16 = 0;
        do {
          if (*(char *)(*(int64_t *)(lVar6 + 0x10) + uVar16) == '\0') {
            local_68 = (int64_t *)0x0;
            uVar21 = FUN_00d21140();
          }
          else {
            switch(uVar16 & 0xffffffff) {
            case 0:
              local_48 = CONCAT44(_UNK_02417124,g_02417120);
              uStack_40 = _UNK_02417128;
              FUN_00c8e2b0(&switchD_01859f41::switchdataD_0185c99c,0x10);
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              FUN_00c92160();
              uVar21 = FUN_00d21140();
              if (local_68 != (int64_t *)0x0) {
                uVar21 = FUN_00d50b20();
              }
              break;
            case 1:
              local_48 = CONCAT44(_UNK_02417134,g_02417130);
              uStack_40 = _UNK_02417138;
              FUN_00c8e2b0(&switchD_01859f41::switchdataD_0185c99c,0x10);
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              FUN_00c92160();
              uVar21 = FUN_00d21140();
              if (local_68 != (int64_t *)0x0) {
                uVar21 = FUN_00d50b20();
              }
              break;
            case 2:
              local_48 = CONCAT44(_UNK_02417244,g_02417240);
              uStack_40 = _UNK_02417248;
              FUN_00c8e2b0(&switchD_01859f41::switchdataD_0185c99c,0x10);
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              FUN_00c92160();
              uVar21 = FUN_00d21140();
              if (local_68 != (int64_t *)0x0) {
                uVar21 = FUN_00d50b20();
              }
              break;
            case 3:
              local_48 = CONCAT44(_UNK_02417254,g_02417250);
              uStack_40 = _UNK_02417258;
              FUN_00c8e2b0(&switchD_01859f41::switchdataD_0185c99c,0x10);
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              FUN_00c92160();
              uVar21 = FUN_00d21140();
              if (local_68 != (int64_t *)0x0) {
                uVar21 = FUN_00d50b20();
              }
              break;
            case 4:
              local_48 = CONCAT44(_UNK_02417144,g_02417140);
              uStack_40 = _UNK_02417148;
              FUN_00c8e2b0(&switchD_01859f41::switchdataD_0185c99c,0x10);
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              FUN_00c92160();
              uVar21 = FUN_00d21140();
              if (local_68 != (int64_t *)0x0) {
                uVar21 = FUN_00d50b20();
              }
              break;
            case 5:
              local_48 = CONCAT44(_UNK_02417154,g_02417150);
              uStack_40 = _UNK_02417158;
              FUN_00c8e2b0(&switchD_01859f41::switchdataD_0185c99c,0x10);
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              FUN_00c92160();
              uVar21 = FUN_00d21140();
              if (local_68 != (int64_t *)0x0) {
                uVar21 = FUN_00d50b20();
              }
              break;
            case 6:
              local_48 = CONCAT44(_UNK_02417164,g_02417160);
              uStack_40 = _UNK_02417168;
              FUN_00c8e2b0(&switchD_01859f41::switchdataD_0185c99c,0x10);
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              FUN_00c92160();
              uVar21 = FUN_00d21140();
              if (local_68 != (int64_t *)0x0) {
                uVar21 = FUN_00d50b20();
              }
              break;
            case 7:
              local_48 = CONCAT44(_UNK_024171d4,g_024171d0);
              uStack_40 = _UNK_024171d8;
              FUN_00c8e2b0(&switchD_01859f41::switchdataD_0185c99c,0x10);
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              FUN_00c92160();
              uVar21 = FUN_00d21140();
              if (local_68 != (int64_t *)0x0) {
                uVar21 = FUN_00d50b20();
              }
              break;
            case 8:
              local_48 = CONCAT44(_UNK_02417174,g_02417170);
              uStack_40 = _UNK_02417178;
              FUN_00c8e2b0(&switchD_01859f41::switchdataD_0185c99c,0x10);
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              FUN_00c92160();
              uVar21 = FUN_00d21140();
              if (local_68 != (int64_t *)0x0) {
                uVar21 = FUN_00d50b20();
              }
              break;
            case 9:
              local_48 = CONCAT44(_UNK_02417184,g_02417180);
              uStack_40 = _UNK_02417188;
              FUN_00c8e2b0(&switchD_01859f41::switchdataD_0185c99c,0x10);
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              FUN_00c92160();
              uVar21 = FUN_00d21140();
              if (local_68 != (int64_t *)0x0) {
                uVar21 = FUN_00d50b20();
              }
              break;
            case 10:
              local_48 = CONCAT44(_UNK_02417194,g_02417190);
              uStack_40 = _UNK_02417198;
              FUN_00c8e2b0(&switchD_01859f41::switchdataD_0185c99c,0x10);
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              FUN_00c92160();
              uVar21 = FUN_00d21140();
              if (local_68 != (int64_t *)0x0) {
                uVar21 = FUN_00d50b20();
              }
              break;
            case 0xb:
              local_48 = CONCAT44(_UNK_024171a4,g_024171a0);
              uStack_40 = _UNK_024171a8;
              FUN_00c8e2b0(&switchD_01859f41::switchdataD_0185c99c,0x10);
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              FUN_00c92160();
              uVar21 = FUN_00d21140();
              if (local_68 != (int64_t *)0x0) {
                uVar21 = FUN_00d50b20();
              }
            }
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 != 0xc);
      }
LAB_0185ae00:
      if (plVar13 != (int64_t *)0x0) {
        uVar21 = FUN_00d50b20();
      }
      if (lVar6 != 0) {
        uVar21 = FUN_00d50b20();
      }
      if (lVar4 != 0) {
        uVar21 = FUN_00d50b20();
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar1);
  }
  lVar4 = g_027df688;
  if (g_027df688 != 0) {
    uVar21 = FUN_00d50b00();
  }
  FUN_018d9a10(uVar21,1);
  if ((char)uStack_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    uStack_40._0_1_ = '\0';
  }
  uVar21 = FUN_00d21140();
  if (local_48 != 0) {
    uVar21 = FUN_00d50b20();
  }
  if (((char)uStack_40 != '\0') && (local_48 != 0)) {
    uVar21 = FUN_00d50b20();
  }
  if (lVar4 != 0) {
    uVar21 = FUN_00d50b20();
  }
  lVar4 = g_027df658;
  if (g_027df658 != 0) {
    uVar21 = FUN_00d50b00();
  }
  FUN_018d9a10(uVar21,1);
  if ((char)uStack_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    uStack_40._0_1_ = '\0';
  }
  uVar21 = FUN_00d21140();
  if (local_48 != 0) {
    uVar21 = FUN_00d50b20();
  }
  if (((char)uStack_40 != '\0') && (local_48 != 0)) {
    uVar21 = FUN_00d50b20();
  }
  if (lVar4 != 0) {
    uVar21 = FUN_00d50b20();
  }
  lVar4 = g_027df698;
  if (g_027df698 != 0) {
    uVar21 = FUN_00d50b00();
  }
  FUN_018d9a10(uVar21,1);
  if ((char)uStack_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    uStack_40._0_1_ = '\0';
  }
  uVar21 = FUN_00d21140();
  if (local_48 != 0) {
    uVar21 = FUN_00d50b20();
  }
  if (((char)uStack_40 != '\0') && (local_48 != 0)) {
    uVar21 = FUN_00d50b20();
  }
  if (lVar4 != 0) {
    uVar21 = FUN_00d50b20();
  }
  lVar4 = g_027df668;
  if (g_027df668 != 0) {
    uVar21 = FUN_00d50b00();
  }
  FUN_018d9a10(uVar21,1);
  if ((char)uStack_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    uStack_40._0_1_ = '\0';
  }
  uVar21 = FUN_00d21140();
  if (local_48 != 0) {
    uVar21 = FUN_00d50b20();
  }
  if (((char)uStack_40 != '\0') && (local_48 != 0)) {
    uVar21 = FUN_00d50b20();
  }
  if (lVar4 != 0) {
    uVar21 = FUN_00d50b20();
  }
  lVar4 = g_027df6a8;
  if (g_027df6a8 != 0) {
    uVar21 = FUN_00d50b00();
  }
  FUN_018d9a10(uVar21,1);
  if ((char)uStack_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    uStack_40._0_1_ = '\0';
  }
  uVar21 = FUN_00d21140();
  if (local_48 != 0) {
    uVar21 = FUN_00d50b20();
  }
  if (((char)uStack_40 != '\0') && (local_48 != 0)) {
    uVar21 = FUN_00d50b20();
  }
  if (lVar4 != 0) {
    uVar21 = FUN_00d50b20();
  }
  lVar4 = g_027df678;
  if (g_027df678 != 0) {
    uVar21 = FUN_00d50b00();
  }
  FUN_018d9a10(uVar21,1);
  if ((char)uStack_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    uStack_40._0_1_ = '\0';
  }
  uVar21 = FUN_00d21140();
  if (local_48 != 0) {
    uVar21 = FUN_00d50b20();
  }
  if (((char)uStack_40 != '\0') && (local_48 != 0)) {
    uVar21 = FUN_00d50b20();
  }
  if (lVar4 != 0) {
    uVar21 = FUN_00d50b20();
  }
  lVar4 = g_027df6b8;
  if (g_027df6b8 != 0) {
    uVar21 = FUN_00d50b00();
  }
  FUN_018d9a10(uVar21,1);
  if ((char)uStack_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    uStack_40._0_1_ = '\0';
  }
  FUN_00d21140();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if (((char)uStack_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar3) {
                        ___stack_chk_fail();
  }
  return;
LAB_0185aca0:
  uVar21 = FUN_00d50b20();
LAB_0185acb0:
  uVar16 = uVar16 + 1;
  if (uVar16 == 0xc) goto LAB_0185ae00;
  goto LAB_0185acbe;
}

