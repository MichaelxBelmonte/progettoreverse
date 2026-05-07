// Function: FUN_016d9380
// Address: 016d9380
// Size: 3768 bytes
// Class: GNString


void FUN_016d9380(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  pthread_key_t pVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  undefined *puVar14;
  longlong lVar15;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong *puVar16;
  undefined4 uVar17;
  longlong local_f0;
  undefined1 local_e8;
  ulonglong local_e0;
  undefined1 local_d8;
  ulonglong local_d0;
  undefined1 local_c8;
  undefined8 *local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  longlong local_90;
  ulonglong local_88;
  undefined8 local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  char local_58;
  ulonglong local_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_f0 = *unaff_RSI;
  if ((*(int *)(local_f0 + 0x10) != 0) && (*(int *)(local_f0 + 0x18) != 0)) {
    cVar5 = FUN_00e7c000();
    if (cVar5 != '\0') {
      return;
    }
    local_f0 = *unaff_RSI;
  }
  local_e8 = 0;
  FUN_016ce9f0(0,&local_f0);
  if (((char)local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  local_90 = local_40;
  if (*(ulonglong *)(local_40 + 0xc) >> 0x20 == 0) {
    FUN_00e7bdb0();
  }
  FUN_00e7c860();
  local_b0 = FUN_00e7cc50();
  if (*(ulonglong *)(local_90 + 0x14) >> 0x20 == 0) {
    FUN_00e7bdb0();
  }
  else {
    local_60 = CONCAT44(local_60._4_4_,1);
    FUN_00e7c280();
  }
  FUN_00e7c860();
  local_a8 = FUN_00e7cc50();
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar14 = &DAT_02572358;
  *puVar9 = &DAT_02572358;
  (*DAT_02572370)();
  local_68 = puVar9;
  FUN_00e7b970();
  FUN_00e7cea0();
  FUN_00d21370();
  local_a0 = local_b0;
  do {
    do {
      pvVar10 = _pthread_getspecific((pthread_key_t)puVar14);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0165d690();
      pvVar10 = _pthread_getspecific((pthread_key_t)puVar14);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018fcb10();
      FUN_01907b60();
      uVar13 = local_60;
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_38._0_1_ = '\0';
      FUN_00d21140();
      if (((char)local_38 != '\0') && (uVar13 != 0)) {
        FUN_00d50b20();
      }
      if (uVar13 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_40 = CONCAT44((int)(uVar13 >> 0x20),1);
      FUN_00e7c260();
    } while ((local_a0._4_4_ == 0) || (local_a8._4_4_ == 0));
    cVar5 = FUN_00e7c020();
    pVar8 = (pthread_key_t)puVar14;
  } while (cVar5 == '\0');
  if (*(int *)((longlong)local_68 + 0xc) == 0) goto LAB_016da212;
  if (*(longlong *)(unaff_RDI + 0x78) == 0) {
    bVar6 = 0;
  }
  else {
    pvVar10 = _pthread_getspecific(pVar8);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01901340();
    lVar15 = unaff_RDI;
    if (local_60 == *(ulonglong *)(unaff_RDI + 0x78)) {
      pvVar10 = _pthread_getspecific((pthread_key_t)unaff_RDI);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar5 = FUN_018fe5d0();
      bVar6 = 1;
      if (cVar5 == '\0') {
        pvVar10 = _pthread_getspecific((pthread_key_t)lVar15);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_70 = FUN_019079b0();
        FUN_00d23340();
        lVar15 = CONCAT71((int7)((ulonglong)lVar15 >> 8),(char)local_38);
        puVar12 = &local_50;
        if ((char)local_38 != '\0') {
          puVar12 = &local_38;
        }
        local_50._0_1_ = (char)local_38;
        *(undefined1 *)puVar12 = 0;
        if (((char)local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        pvVar10 = _pthread_getspecific((pthread_key_t)lVar15);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_98 = FUN_019079b0();
        bVar6 = 0;
        if ((local_70._4_4_ != 0) && (bVar6 = 0, local_98 >> 0x20 != 0)) {
          bVar6 = FUN_00e7c020();
          bVar6 = bVar6 ^ 1;
        }
        if (((char)local_50 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      bVar6 = 0;
    }
    pVar8 = (pthread_key_t)lVar15;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (bVar6 != 0) {
      FUN_00d23340();
      local_70 = CONCAT71(local_70._1_7_,(char)local_38);
      puVar12 = &local_70;
      if ((char)local_38 != '\0') {
        puVar12 = &local_38;
      }
      *(undefined1 *)puVar12 = 0;
      if (((char)local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar10 = _pthread_getspecific(pVar8);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      uVar13 = *(ulonglong *)(unaff_RDI + 0x68);
      local_60 = uVar13;
      FUN_00e7b820();
      pVar8 = (pthread_key_t)uVar13;
      if (((char)local_70 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar10 = _pthread_getspecific(pVar8);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018fcb10();
      FUN_01907b60();
      local_40 = local_60;
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_38._0_1_ = '\0';
      FUN_00d21140();
      if (((char)local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d23340();
      puVar12 = &local_38;
      if ((char)local_38 == '\0') {
        puVar12 = &local_60;
      }
      local_60 = CONCAT71(local_60._1_7_,(char)local_38);
      *(undefined1 *)puVar12 = 0;
      if (((char)local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_60 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      if (*(ulonglong *)(unaff_RDI + 0x78) != local_40) {
        FUN_00d64850();
        uVar13 = *(ulonglong *)(unaff_RDI + 0x78);
        if (uVar13 != local_40) {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          *(ulonglong *)(unaff_RDI + 0x78) = local_40;
          if (uVar13 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d64910();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
    if (*(longlong *)(unaff_RDI + 0x78) != 0) {
      pvVar10 = _pthread_getspecific(pVar8);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019012b0();
      if (local_40 == *(ulonglong *)(unaff_RDI + 0x78)) {
        pvVar10 = _pthread_getspecific(pVar8);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_60 = FUN_019079b0();
        pvVar10 = _pthread_getspecific(pVar8);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_70 = FUN_019079b0();
        bVar7 = 0;
        if ((local_60._4_4_ != 0) && (local_70 >> 0x20 != 0)) {
          bVar7 = FUN_00e7c020();
          bVar7 = bVar7 ^ 1;
        }
      }
      else {
        bVar7 = 0;
      }
      if (((char)local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (bVar7 != 0) {
        pvVar10 = _pthread_getspecific(pVar8);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_019079b0();
        pvVar10 = _pthread_getspecific(pVar8);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar8 = 0;
        FUN_0165cf20(0,0);
        local_60 = CONCAT44(local_60._4_4_,1);
        FUN_00e7c280();
        pvVar10 = _pthread_getspecific(pVar8);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165d690();
        pvVar10 = _pthread_getspecific(pVar8);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_018fcb10();
        uVar17 = FUN_01907b60();
        local_40 = local_60;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            uVar17 = FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_38._0_1_ = '\0';
        FUN_00d23370(uVar17,0);
        if (((char)local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        lVar15 = *(longlong *)local_68[2];
        if (lVar15 != 0) {
          FUN_00d50b00();
        }
        if (*(longlong *)(unaff_RDI + 0x78) != lVar15) {
          FUN_00d64850();
          lVar1 = *(longlong *)(unaff_RDI + 0x78);
          if (lVar1 != lVar15) {
            if (lVar15 != 0) {
              FUN_00d50b00();
            }
            *(longlong *)(unaff_RDI + 0x78) = lVar15;
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_00d64910();
        }
        if (lVar15 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  pvVar10 = _pthread_getspecific(pVar8);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar10 = _pthread_getspecific(pVar8);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar11 = FUN_019079b0();
  pVar8 = 0;
  FUN_018fef60(0,uVar11);
  if (((((char)local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), (char)local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar10 = _pthread_getspecific(pVar8);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d23340();
  local_70 = CONCAT71(local_70._1_7_,(char)local_38);
  puVar12 = &local_70;
  if ((char)local_38 != '\0') {
    puVar12 = &local_38;
  }
  *(undefined1 *)puVar12 = 0;
  if (((char)local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar10 = _pthread_getspecific(pVar8);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar11 = FUN_019079b0();
  pVar8 = 0;
  uVar13 = FUN_018ff980(0,uVar11);
  uVar4 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != 0) && (uVar13 = FUN_00d50b00(), local_58 != '\0')) && (local_60 != 0)) {
      uVar13 = FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if (((char)local_70 != '\0') && (local_40 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  if (bVar6 == 0) {
    local_88 = uVar4;
    if (local_40 == 0) {
LAB_016da0fa:
      local_80 = CONCAT71((int7)(uVar13 >> 8),1);
      bVar3 = false;
      local_78 = local_40;
    }
    else {
      pvVar10 = _pthread_getspecific(pVar8);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_60 = FUN_019079b0();
      FUN_00d23340();
      puVar12 = &local_98;
      puVar16 = &local_38;
      if ((char)local_38 == '\0') {
        puVar16 = puVar12;
      }
      local_98 = CONCAT71(local_98._1_7_,(char)local_38);
      *(undefined1 *)puVar16 = 0;
      if (((char)local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar10 = _pthread_getspecific((pthread_key_t)puVar12);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_70 = FUN_019079b0();
      cVar5 = '\0';
      uVar13 = local_70;
      if ((local_60._4_4_ != 0) && (uVar13 = 0, local_70 >> 0x20 != 0)) {
        uVar13 = FUN_00e7c020();
        cVar5 = (char)uVar13;
      }
      if (((char)local_98 != '\0') && (local_40 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      if (cVar5 == '\0') goto LAB_016da0fa;
      local_78 = 0;
      local_80 = 1;
      FUN_00d50b20();
      bVar3 = true;
      local_80 = 0;
    }
    bVar2 = false;
  }
  else {
    local_80 = CONCAT71((int7)(uVar13 >> 8),1);
    if (uVar4 == 0) {
      bVar3 = false;
      local_78 = local_40;
      bVar2 = false;
      local_88 = 0;
    }
    else {
      bVar3 = false;
      local_78 = local_40;
      local_88 = 0;
      FUN_00d50b20();
      bVar2 = true;
    }
  }
  local_e0 = local_78;
  local_d8 = 0;
  local_d0 = local_88;
  local_c8 = 0;
  pVar8 = FUN_00e7bdb0();
  local_c0 = local_68;
  local_b8 = 0;
  uVar11 = FUN_00e7bdb0();
  FUN_016e9760(0,&local_d0,&local_c0,uVar11);
  pvVar10 = _pthread_getspecific(pVar8);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018f9310();
  if (!bVar2 && local_88 != 0) {
    FUN_00d50b20();
  }
  if (!bVar3 && local_78 != 0) {
    FUN_00d50b20();
  }
LAB_016da212:
  FUN_00d50b20();
  if (local_90 != 0) {
    FUN_00d50b20();
  }
  return;
}


