// Function: FUN_01b8b2b0
// Address: 01b8b2b0
// Size: 1540 bytes
// Class: MUAudioSourcePrincipalItem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b8b2b0(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar8;
  float fVar9;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (unaff_RDI[0x29] != *unaff_RSI) {
    if (unaff_RDI[0x29] != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        local_88 = 0;
        (**(code **)(unaff_RDI[0x27] + 0x10))();
        FUN_00d50b00();
        local_88 = '\x01';
        local_f0 = 0;
        local_e8 = '\0';
        local_e0 = 0;
        local_d8 = '\0';
        plVar6 = &local_e0;
        local_90 = unaff_RDI + 0x27;
        FUN_00cbadd0(plVar6,&local_f0);
        param_1 = (pthread_key_t)plVar6;
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          (**(code **)(*local_90 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    lVar4 = *unaff_RSI;
    lVar1 = unaff_RDI[0x29];
    lVar2 = lVar1;
    if (lVar1 != lVar4) {
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      unaff_RDI[0x29] = lVar4;
      lVar2 = lVar4;
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar2 = unaff_RDI[0x29];
      }
    }
    if (lVar2 != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        plVar6 = unaff_RDI + 0x27;
        local_78 = 0;
        (**(code **)(unaff_RDI[0x27] + 0x10))();
        FUN_00d50b00();
        local_78 = '\x01';
        local_68 = 0;
        local_70 = unaff_RDI[0x29];
        local_80 = plVar6;
        if (local_70 != 0) {
          FUN_00d50b00();
        }
        local_68 = '\x01';
        local_d0 = 0;
        local_c8 = '\0';
        plVar7 = &local_d0;
        FUN_00cbad30(plVar7,&local_70,4);
        pVar5 = (pthread_key_t)plVar7;
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          (**(code **)(*local_80 + 0x10))();
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        local_58 = 0;
        (**(code **)(*plVar6 + 0x10))();
        FUN_00d50b00();
        local_58 = '\x01';
        local_60 = plVar6;
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0188f1e0();
        local_50 = local_b0;
        local_48 = 0;
        if (local_a8 == '\0') {
          if (local_b0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a8 = '\0';
        }
        local_48 = '\x01';
        FUN_006ddb00();
        uVar8 = FUN_00e86210();
        local_c0 = DAT_02726c58;
        if (DAT_02726c58 != 0) {
          uVar8 = FUN_00d50b00();
        }
        local_b8 = '\x01';
        FUN_00c841b0(uVar8,&local_c0);
        local_40 = local_a0;
        local_38 = 0;
        if (local_98 == '\0') {
          if (local_a0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_98 = '\0';
        }
        local_38 = '\x01';
        plVar6 = &local_40;
        FUN_00cbad30(plVar6,&local_50,4);
        param_1 = (pthread_key_t)plVar6;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          (**(code **)(*local_60 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    *(undefined4 *)((longlong)unaff_RDI + 0x184) = 0x3f19999a;
    if (unaff_RDI[0x29] != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar9 = (float)FUN_0188f1c0();
      if (_DAT_023b294c < fVar9 * DAT_02394dc0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar9 = (float)FUN_0188f1c0();
        *(float *)((longlong)unaff_RDI + 0x184) = fVar9 * DAT_02394dc0;
      }
    }
    (**(code **)(*unaff_RDI + 0x620))();
  }
  return;
}


