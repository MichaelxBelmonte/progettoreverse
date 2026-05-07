// Function: FUN_01b8b2b0
// Address: 01b8b2b0
// Size: 1540 bytes
// Class: MUAudioSourcePrincipalItem

void FUN_01b8b2b0(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar8;
  float fVar9;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (this_ptr[0x29] != *arg1) {
    if (this_ptr[0x29] != 0) {
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
        (**(code **)(this_ptr[0x27] + 0x10))();
        FUN_00d50b00();
        local_88 = '\x01';
        local_f0 = 0;
        local_e8 = '\0';
        local_e0 = 0;
        local_d8 = '\0';
        plVar6 = &local_e0;
        local_90 = this_ptr + 0x27;
        FUN_00cbadd0(plVar6,&local_f0);
        param_1 = (void*)plVar6;
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          (**(code **)(*local_90 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    lVar4 = *arg1;
    lVar1 = this_ptr[0x29];
    lVar2 = lVar1;
    if (lVar1 != lVar4) {
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      this_ptr[0x29] = lVar4;
      lVar2 = lVar4;
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar2 = this_ptr[0x29];
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
        plVar6 = this_ptr + 0x27;
        local_78 = 0;
        (**(code **)(this_ptr[0x27] + 0x10))();
        FUN_00d50b00();
        local_78 = '\x01';
        local_68 = 0;
        local_70 = this_ptr[0x29];
        local_80 = plVar6;
        if (local_70 != 0) {
          FUN_00d50b00();
        }
        local_68 = '\x01';
        local_d0 = 0;
        local_c8 = '\0';
        plVar7 = &local_d0;
        FUN_00cbad30(plVar7,&local_70,4);
        pVar5 = (void*)plVar7;
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
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
        local_c0 = g_02726c58;
        if (g_02726c58 != 0) {
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
        param_1 = (void*)plVar6;
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
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          (**(code **)(*local_60 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    *(void*)((int64_t)this_ptr + 0x184) = 0x3f19999a;
    if (this_ptr[0x29] != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar9 = (float)FUN_0188f1c0();
      if (g_023b294c < fVar9 * g_02394dc0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar9 = (float)FUN_0188f1c0();
        *(float *)((int64_t)this_ptr + 0x184) = fVar9 * g_02394dc0;
      }
    }
    (**(code **)(*this_ptr + 0x620))();
  }
  return;
}

