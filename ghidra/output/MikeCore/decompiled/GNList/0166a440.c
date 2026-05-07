// Function: FUN_0166a440
// Address: 0166a440
// Size: 1843 bytes
// Class: GNList


undefined4 FUN_0166a440(pthread_key_t param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  pthread_key_t pVar3;
  undefined4 uVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  char unaff_SIL;
  longlong unaff_RDI;
  longlong local_128;
  longlong local_120;
  char local_118;
  undefined8 *local_110;
  char local_108;
  undefined8 *local_100;
  char local_f8;
  undefined8 *local_f0;
  char local_e8;
  undefined8 *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  undefined8 *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined8 *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined8 *local_38;
  
  if (((*(longlong *)(unaff_RDI + 0x108) == 0) && (*(longlong *)(unaff_RDI + 0x110) == 0)) &&
     (*(char *)(unaff_RDI + 0x107) == '\0')) {
    uVar4 = 0;
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df10();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d900();
    local_38 = local_68;
    if (local_60 == '\0') {
      if (((local_68 != (undefined8 *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    pVar3 = 0;
    if (unaff_SIL != '\0') {
      pvVar5 = _pthread_getspecific(param_1);
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        param_1 = (pthread_key_t)local_38;
      }
      FUN_0150eb60();
      puVar8 = local_68;
      if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar8 != (undefined8 *)0x0) {
        pvVar5 = _pthread_getspecific(param_1);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          param_1 = (pthread_key_t)local_38;
        }
        FUN_0150eb60();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar3 = FUN_018232b0();
        if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01685940(pVar3,*(undefined8 *)(unaff_RDI + 0x38));
    puVar8 = local_68;
    if ((((local_60 == '\0') && (local_68 != (undefined8 *)0x0)) &&
        (FUN_00d50b00(), local_60 != '\0')) && (local_68 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    puVar2 = local_38;
    local_98 = puVar8;
    uVar4 = 0;
    if (unaff_SIL != '\0') {
      pvVar5 = _pthread_getspecific(pVar3);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510030();
      puVar8 = local_68;
      if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      uVar4 = 0;
      if (puVar8 != (undefined8 *)0x0) {
        pvVar5 = _pthread_getspecific(pVar3);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01510030();
        pvVar5 = _pthread_getspecific(pVar3);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = FUN_0124ae30();
        if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01686250(uVar4,*(undefined8 *)(unaff_RDI + 0x38));
    puVar1 = local_68;
    puVar8 = local_98;
    if ((((local_60 == '\0') && (local_68 != (undefined8 *)0x0)) &&
        (FUN_00d50b00(), local_60 != '\0')) && (local_68 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_110 = puVar8;
    local_108 = '\0';
    local_100 = puVar1;
    local_f8 = '\0';
    local_f0 = puVar2;
    local_e8 = '\0';
    ppuVar7 = &local_f0;
    FUN_01687020(ppuVar7,&local_100);
    puVar2 = local_68;
    pVar3 = (pthread_key_t)ppuVar7;
    if (local_60 == '\0') {
      if (((local_68 != (undefined8 *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_e8 != '\0') && (local_f0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      pvVar5 = _pthread_getspecific(pVar3);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_e0 = puVar2;
      local_d8 = '\0';
      uVar4 = FUN_01512830();
      if ((local_d8 != '\0') && (local_e0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)uVar4 != '\0') {
        local_90 = puVar2;
        FUN_00d403d0();
        local_d0 = DAT_027c8278;
        if (DAT_027c8278 != 0) {
          FUN_00d50b00();
        }
        local_c8 = '\x01';
        local_c0 = local_38;
        local_b8 = '\0';
        FUN_00d46300();
        local_a0 = DAT_027c8270;
        if (DAT_027c8270 != 0) {
          FUN_00d50b00();
        }
        local_128 = local_a0;
        FUN_00083ea0(2,&local_128);
        FUN_000b4da0();
        local_88 = local_b0;
        local_80 = 0;
        if (local_a8 == '\0') {
          if (local_b0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a8 = '\0';
        }
        puVar8 = local_98;
        local_80 = '\x01';
        FUN_00d40470(&local_88,&local_c0,3,3);
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        local_68 = (undefined8 *)&DAT_0253d630;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        local_68 = &DAT_024c5048;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_a0 != 0) {
          FUN_00d50b20();
        }
        if ((local_118 != '\0') && (local_120 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (puVar8 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (local_38 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  return uVar4;
}


