// Function: FUN_016d23e0
// Address: 016d23e0
// Size: 6484 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x016d386b) */
/* WARNING: Removing unreachable block (ram,0x016d3874) */
/* WARNING: Removing unreachable block (ram,0x016d3979) */
/* WARNING: Removing unreachable block (ram,0x016d3982) */
/* WARNING: Removing unreachable block (ram,0x016d3a7b) */
/* WARNING: Removing unreachable block (ram,0x016d3a84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_016d23e0(undefined8 param_1,longlong *param_2,int param_3,char param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  char cVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int extraout_var;
  int iVar13;
  void *pvVar11;
  int extraout_var_00;
  ulonglong uVar12;
  int extraout_var_01;
  int extraout_var_02;
  int extraout_var_03;
  byte bVar14;
  pthread_key_t pVar15;
  ulonglong uVar16;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_res8;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  ulonglong *local_100;
  ulonglong local_f8;
  char local_f0;
  undefined4 local_dc;
  ulonglong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  longlong local_98;
  undefined4 local_8c;
  undefined8 local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined8 local_50;
  int iStack_3c;
  char local_38;
  
  uVar5 = local_80;
  local_b8 = param_1;
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  pcVar4 = DAT_02572370;
  local_a0 = puVar7;
  (*DAT_02572370)();
  if (((*(int *)(*param_2 + 0x10) != 0) && (*(int *)(*param_2 + 0x18) != 0)) &&
     (cVar6 = FUN_00e7c000(), cVar6 != '\0')) {
    *unaff_RDI = local_a0;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  }
  FUN_016ce9f0(0);
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  uVar16 = uVar5;
  if (((*(longlong *)(unaff_RSI + 0x78) == 0) || (*(char *)(unaff_RSI + 0x80) == '\0')) ||
     ((uint)local_b8 != 0x12)) {
    bVar19 = (uint)local_b8 == 4;
    if ((((uint)local_b8 < 5) && ((uint)local_b8 != 1)) || (((uint)local_b8 == 6 && (param_3 == 1)))
       ) {
      uVar12 = *(ulonglong *)(local_80 + 0xc);
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
      *(ulonglong *)(local_80 + 0xc) = uVar9;
      local_80 = uVar12;
    }
    uVar17 = (uint)local_b8;
    bVar18 = uVar17 == 0xb;
    if (0x15 < uVar17) goto LAB_016d2650;
    if ((0x3de2U >> (uVar17 & 0x1f) & 1) == 0) {
      if (uVar17 == 0x15) {
        iVar13 = (int)(*(ulonglong *)(uVar5 + 0xc) >> 0x20);
        if (*(ulonglong *)(uVar5 + 0xc) >> 0x20 == 0) {
          FUN_00e7bdb0();
          iVar13 = extraout_var;
        }
        uVar12 = *(ulonglong *)(uVar5 + 0x14);
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
    uVar12 = *(ulonglong *)(uVar5 + 0x14);
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
    *(ulonglong *)(uVar5 + 0x14) = uVar12;
    if (*(int *)(uVar5 + 0x10) != 0) goto LAB_016d277c;
LAB_016d27a2:
    local_100 = (ulonglong *)(uVar5 + 0xc);
    pVar15 = (pthread_key_t)uVar16;
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
          if (*(ulonglong *)(local_80 + 0xc) >> 0x20 == 0) {
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
        local_dc = (undefined4)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
        local_d8 = 0;
        FUN_00d50b20();
      }
      local_d0 = *local_100;
      if (local_d0 >> 0x20 == 0) {
        local_d0 = FUN_00e7bdb0();
      }
      local_a8 = *(ulonglong *)(uVar5 + 0x14);
      uVar16 = local_a8 >> 0x20;
      if (uVar16 == 0) {
        local_a8 = FUN_00e7bdb0();
      }
      else {
        FUN_00e7c280();
      }
      uVar17 = (byte)(bVar18 | bVar19) | 2;
      local_98 = unaff_RSI + 0x58;
      do {
        FUN_00e7c280();
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar16);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165d690();
        pvVar11 = _pthread_getspecific((pthread_key_t)uVar16);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar6 = FUN_018fe5d0();
        uVar16 = CONCAT71((int7)(uVar16 >> 8),local_d8 == 0);
        if (((((cVar6 == '\0' && local_d8 != 0) && (extraout_var_00 != 0)) && (local_c8._4_4_ != 0))
            && ((cVar6 = FUN_00e7c020(), cVar6 != '\0' && (extraout_var_00 != 0)))) &&
           (local_b0._4_4_ != 0)) {
          cVar6 = FUN_00e7c020();
          pVar15 = (pthread_key_t)uVar16;
          if (cVar6 != '\0') break;
        }
        FUN_00e7c280();
        pVar15 = (pthread_key_t)uVar16;
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
        local_80._4_4_ = (undefined4)(uVar16 >> 0x20);
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
              local_80._4_4_ = (undefined4)(uVar16 >> 0x20);
              local_80 = CONCAT44(local_80._4_4_,1);
              FUN_00e7c260();
            }
          }
        }
      }
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_025fa538;
      uVar3 = _UNK_0239372c;
      uVar2 = _UNK_02393728;
      uVar20 = _UNK_02393724;
      *(undefined4 *)((longlong)puVar7 + 0xc) = _DAT_02393720;
      *(undefined4 *)(puVar7 + 2) = uVar20;
      *(undefined4 *)((longlong)puVar7 + 0x14) = uVar2;
      *(undefined4 *)(puVar7 + 3) = uVar3;
      FUN_00d500e0();
      uVar20 = *(undefined4 *)(uVar5 + 0x10);
      uVar2 = *(undefined4 *)(uVar5 + 0x14);
      uVar3 = *(undefined4 *)(uVar5 + 0x18);
      *(undefined4 *)((longlong)puVar7 + 0xc) = *(undefined4 *)local_100;
      *(undefined4 *)(puVar7 + 2) = uVar20;
      *(undefined4 *)((longlong)puVar7 + 0x14) = uVar2;
      *(undefined4 *)(puVar7 + 3) = uVar3;
      if (local_d8 == 0) {
LAB_016d308f:
        uVar17 = (uint)local_b8;
        if (uVar17 - 0x12 < 3) goto LAB_016d330c;
        if (uVar17 != 1) {
          uVar16 = *(ulonglong *)((longlong)puVar7 + 0x14);
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
            uVar16 = *(ulonglong *)((longlong)puVar7 + 0x14);
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
            *(ulonglong *)((longlong)puVar7 + 0x14) = uVar16;
          }
          goto LAB_016d3305;
        }
      }
      else {
        uVar16 = *(ulonglong *)(uVar5 + 0x14);
        pVar15 = (pthread_key_t)(uVar16 >> 0x20);
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
        uVar16 = *(ulonglong *)(uVar5 + 0x14);
        pVar15 = (pthread_key_t)(uVar16 >> 0x20);
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
          uVar16 = *(ulonglong *)((longlong)puVar7 + 0x14);
          if (uVar16 >> 0x20 == 0) {
            uVar16 = FUN_00e7bdb0();
          }
          else {
            FUN_00e7c280();
            local_80 = uVar16;
          }
          if (((uVar16 >> 0x20 != 0) && (local_d0._4_4_ != 0)) &&
             (cVar6 = FUN_00e7c020(), cVar6 != '\0')) {
            local_80 = *(ulonglong *)((longlong)puVar7 + 0xc);
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
            *(ulonglong *)((longlong)puVar7 + 0xc) = uVar16;
          }
        }
      }
      if (*local_res8 != 0) {
        iVar13 = (int)(*(ulonglong *)((longlong)puVar7 + 0xc) >> 0x20);
        if (*(ulonglong *)((longlong)puVar7 + 0xc) >> 0x20 == 0) {
          FUN_00e7bdb0();
          iVar13 = extraout_var_02;
        }
        FUN_00e7c280();
        local_80 = *(ulonglong *)((longlong)puVar7 + 0x14);
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
          uVar12 = *(ulonglong *)((longlong)puVar7 + 0x14);
          pVar15 = (pthread_key_t)(uVar12 >> 0x20);
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
          local_80 = *(ulonglong *)((longlong)puVar7 + 0xc);
          pVar15 = (pthread_key_t)(local_80 >> 0x20);
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
    if (((*(longlong *)(unaff_RSI + 0x78) != 0) && (*(char *)(unaff_RSI + 0x80) != '\0')) &&
       ((uint)local_b8 == 0x12)) {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_02572358;
      (*pcVar4)();
      if (local_a0 != (undefined8 *)0x0) {
        local_a0 = puVar7;
        FUN_00d50b20();
      }
      lVar1 = *(longlong *)(unaff_RSI + 0x78);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      *unaff_RDI = puVar7;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (uVar5 == 0) {
        return unaff_RDI;
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
    pVar15 = (pthread_key_t)(*(ulonglong *)(uVar5 + 0x14) >> 0x20);
    if (*(ulonglong *)(uVar5 + 0x14) >> 0x20 == 0) {
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
      puVar7 = (undefined8 *)FUN_019079b0();
      if (((extraout_var_03 != 0) && ((ulonglong)puVar7 >> 0x20 != 0)) &&
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
          if ((local_38 != '\0') && (puVar7 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_38 == '\0') {
            if (puVar7 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            bVar19 = local_a0 != (undefined8 *)0x0;
            local_a0 = puVar7;
            if (bVar19) {
              FUN_00d50b20();
            }
            goto LAB_016d3c76;
          }
          bVar19 = local_a0 != (undefined8 *)0x0;
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
    if (*(ulonglong *)(local_80 + 0xc) >> 0x20 == 0) {
      FUN_00e7bdb0();
    }
    local_c8 = CONCAT44(local_c8._4_4_,1);
    FUN_00e7c260();
    local_80 = *(ulonglong *)(local_80 + 0x14);
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
  *unaff_RDI = local_a0;
  *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_016d3d26:
  FUN_00d50b20();
  return unaff_RDI;
}


