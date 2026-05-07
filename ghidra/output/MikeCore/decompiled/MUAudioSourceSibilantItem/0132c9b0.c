// Function: FUN_0132c9b0
// Address: 0132c9b0
// Size: 1974 bytes
// Class: MUAudioSourceSibilantItem


/* WARNING: Removing unreachable block (ram,0x0132d0b1) */
/* WARNING: Removing unreachable block (ram,0x0132d0bd) */
/* WARNING: Removing unreachable block (ram,0x0132cae8) */
/* WARNING: Removing unreachable block (ram,0x0132caf4) */
/* WARNING: Removing unreachable block (ram,0x0132cbd4) */
/* WARNING: Removing unreachable block (ram,0x0132cbe0) */
/* WARNING: Removing unreachable block (ram,0x0132d0f1) */
/* WARNING: Removing unreachable block (ram,0x0132d0fd) */

void FUN_0132c9b0(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  char *pcVar6;
  pthread_key_t pVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  char *pcVar8;
  char local_90;
  undefined7 uStack_8f;
  char local_88;
  longlong local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(longlong *)(unaff_RSI + 0x200) == 0) {
    FUN_01505340();
    local_50 = local_48;
    if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_0132c660(param_1,0);
    local_80 = local_48;
    if ((local_40[0] == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = (pthread_key_t)local_50;
    }
    FUN_01505960();
    if (*(longlong *)(unaff_RSI + 0x58) != 0) {
      FUN_00d50b00();
      pvVar4 = _pthread_getspecific(param_1);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        param_1 = (pthread_key_t)local_50;
      }
      FUN_016cbba0();
      local_78 = local_48;
      local_70 = 0;
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      local_70 = '\x01';
      FUN_015056c0();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = (pthread_key_t)local_50;
    }
    FUN_015058d0();
    lVar5 = local_48;
    if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_58 = lVar5;
    if (*(longlong *)(unaff_RSI + 0x68) != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150eb60();
      lVar5 = local_48;
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar5 = *(longlong *)(unaff_RSI + 0x68);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        FUN_01512830();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      if (*(longlong *)(unaff_RSI + 0x68) != 0) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01510280();
        lVar5 = local_48;
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar5 = *(longlong *)(unaff_RSI + 0x68);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          FUN_01512890();
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
        }
      }
    }
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = (pthread_key_t)local_58;
    }
    FUN_0150eff0();
    FUN_00d23310();
    lVar5 = local_48;
    local_90 = local_40[0];
    pcVar6 = &local_90;
    if (local_40[0] != '\0') {
      pcVar6 = local_40;
    }
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 == '\0') && (lVar5 != 0)) {
      FUN_00d50b00();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    FUN_00d23310();
    lVar2 = local_48;
    lVar1 = local_80;
    pcVar6 = local_38;
    pcVar8 = local_40;
    if (local_40[0] == '\0') {
      pcVar8 = pcVar6;
    }
    local_38[0] = local_40[0];
    *pcVar8 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pVar7 = (pthread_key_t)pcVar6;
    if ((local_38[0] == '\0') && (lVar2 != 0)) {
      FUN_00d50b00();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    lVar3 = local_48;
    if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150ddd0();
    FUN_00e7bdb0();
    FUN_01287c80();
    *unaff_RDI = local_50;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313b00();
  }
  return;
}


