// Function: FUN_002ad1a0
// Address: 002ad1a0
// Size: 2358 bytes
// Class: MDMetaWindowController

void* FUN_002ad1a0(uint64_t param_1)

{
  int64_t lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t *plVar6;
  int64_t lVar7;
  void* pVar8;
  char *pcVar9;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar10;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70 [8];
  int64_t local_68;
  uint64_t local_60;
  int local_58;
  int64_t *local_50;
  char local_48;
  char local_40 [8];
  int64_t *local_38;
  
  cVar3 = (char)param_1;
  (**(code **)(*arg1 + 0x5e0))();
  FUN_01e561b0();
  FUN_01d8f0f0();
  if (local_70[0] == '\0') {
    if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70[0] != '\0')) &&
       (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70[0] = '\0';
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_78 != (int64_t *)0x0) {
    (**(code **)(*arg1 + 0x5e0))();
    FUN_01e561b0();
    (**(code **)(*local_78 + 0x9b0))();
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_78 + 0x450))();
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar10 = local_78;
  if (cVar2 != '\0') {
    (**(code **)(*arg1 + 0x5e0))();
    FUN_00643590();
    FUN_00d23310();
    pVar8 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_70[0]);
    pcVar9 = local_40;
    if (local_70[0] != '\0') {
      pcVar9 = local_70;
    }
    local_40[0] = local_70[0];
    *pcVar9 = '\0';
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] == '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_78 != (int64_t *)0x0) {
      cVar2 = FUN_00212c70();
      lVar7 = g_027259a0;
      if (cVar2 != '\0') {
        if (g_027259a0 != 0) {
          FUN_00d50b00();
        }
        lVar1 = g_026fe4a0;
        if (g_026fe4a0 != 0) {
          FUN_00d50b00();
        }
        FUN_01f6ca30();
        iVar4 = (**(code **)(*local_78 + 0x5e0))();
        if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if (iVar4 != 0) {
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
          FUN_00d50b20();
          goto joined_r0x002ad91d;
        }
        FUN_002218b0();
        (**(code **)(*local_88 + 0x628))();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a1110();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        FUN_00cafd20();
        if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_002218f0();
        FUN_002218b0();
        (**(code **)(*local_88 + 0x628))();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a1110();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        plVar6 = (int64_t *)FUN_00e8b990();
        (**(code **)(*plVar6 + 0x3c8))();
        if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
  }
  if ((cVar3 == '\0') && (arg1[9] != 0)) {
    local_38 = local_78;
    local_70[0] = '\0';
    local_78 = (int64_t *)0x0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_68 = arg1[9];
    do {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar4 = -local_60._4_4_;
        }
        else {
          iVar4 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar4);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar4 = 0;
        }
        local_60 = CONCAT44(iVar4,(int)local_60);
      }
      lVar7 = (int64_t)(int)local_60;
      iVar4 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar4);
      if (*(int *)(local_68 + 0xc) <= iVar4) {
        FUN_002b3090();
        plVar10 = local_38;
        break;
      }
      local_78 = *(int64_t **)(*(int64_t *)(local_68 + 0x10) + 8 + lVar7 * 8);
      (**(code **)(*local_78 + 0x468))();
      plVar10 = local_50;
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar10 != (int64_t *)0x0) {
        (**(code **)(*local_78 + 0x468))();
        cVar3 = (**(code **)(*local_50 + 0x50))();
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') goto LAB_002ada7c;
      }
    } while( true );
  }
  cVar3 = FUN_0074db00();
  if (cVar3 == '\0') {
    FUN_00751e50();
    if (local_70[0] == '\0') {
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_002ad87f;
      }
    }
    else if (local_78 != (int64_t *)0x0) {
LAB_002ad87f:
      cVar3 = (**(code **)(*local_78 + 0x448))();
      if (cVar3 == '\0') {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        FUN_00d50b20();
      }
      else {
        FUN_002aa8c0();
        *this_ptr = local_78;
        *(void*)(this_ptr + 1) = 1;
      }
      goto joined_r0x002ad91d;
    }
  }
  else {
    (**(code **)(*arg1 + 0x5e0))();
    FUN_01e561b0();
    plVar6 = local_50;
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_007e22d0();
    if (local_70[0] == '\0') {
      if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70[0] != '\0')) &&
         (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70[0] = '\0';
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_78 != (int64_t *)0x0) {
      FUN_007ea750();
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      FUN_00d50b20();
      goto joined_r0x002ad91d;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
joined_r0x002ad91d:
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
LAB_002ada7c:
  (**(code **)(*local_78 + 0x4c8))();
  *(void*)(this_ptr + 1) = 0;
  if (local_70[0] == '\0') {
    if (local_78 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *this_ptr = local_78;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *this_ptr = local_78;
    *(void*)(this_ptr + 1) = 1;
    local_70[0] = '\0';
  }
  FUN_002b3090();
  plVar10 = local_38;
  goto joined_r0x002ad91d;
}

