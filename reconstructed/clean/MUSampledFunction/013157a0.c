// Function: FUN_013157a0
// Address: 013157a0
// Size: 2866 bytes
// Class: MUSampledFunction

uint64_t FUN_013157a0(uint64_t param_1,uint64_t param_2,uint32_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  void *pvVar7;
  int64_t lVar8;
  void* pVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t *this_ptr;
  uint uVar12;
  uint64_t uVar13;
  int64_t lVar14;
  uint64_t local_108;
  uint8_t local_100;
  uint8_t local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  uint32_t local_c4;
  int64_t local_c0;
  uint64_t local_b8;
  int64_t local_b0;
  int64_t local_a8;
  char local_a0;
  uint64_t local_80;
  char local_78;
  int local_68;
  byte local_54;
  int64_t local_40;
  char local_38;
  
  uVar11 = local_80;
  uVar10 = param_1;
  pvVar7 = _pthread_getspecific((void*)param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  iVar1 = *(int *)(local_80 + 0xc);
  pvVar7 = _pthread_getspecific((void*)uVar10);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150eff0();
  iVar2 = *(int *)(local_40 + 0xc);
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (iVar1 != iVar2) {
    return 0;
  }
  pvVar7 = _pthread_getspecific((void*)uVar10);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_78 == '\0') {
    if (local_80 == 0) goto LAB_0131607e;
    FUN_00d50b00();
  }
  else if (local_80 == 0) {
LAB_0131607e:
    uVar13 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    uVar11 = uVar10;
    goto LAB_01316081;
  }
  local_78 = '\0';
  local_80 = 0;
  local_b8 = uVar11;
  local_68 = -1;
  local_c4 = param_3;
  uVar12 = 0xffffff01;
LAB_01315958:
  while( true ) {
    uVar6 = uVar12;
    lVar14 = (int64_t)local_68;
    local_68 = local_68 + 1;
    if (*(int *)(uVar11 + 0xc) <= local_68) break;
    lVar8 = *(int64_t *)(uVar11 + 0x10);
    local_80 = *(uint64_t *)(lVar8 + 8 + lVar14 * 8);
    pvVar7 = _pthread_getspecific((void*)lVar8);
    pVar9 = (void*)lVar8;
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar12 = uVar6;
    if (local_40 == 0) {
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a2d0();
    }
    else {
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150d280();
      local_38 = '\0';
      cVar5 = FUN_00d23d70();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') goto LAB_01315bc6;
      if (local_40 != 0) goto LAB_0131604c;
    }
  }
  FUN_001159b0();
  FUN_00d50b20();
  uVar13 = (uint64_t)uVar6;
  param_3 = local_c4;
LAB_01316081:
  pvVar7 = _pthread_getspecific((void*)uVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  iVar1 = *(int *)(local_80 + 0xc);
  if (local_78 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 != 0) {
    pvVar7 = _pthread_getspecific((void*)uVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if (local_78 == '\0') {
      if (local_80 == 0) {
        return uVar13;
      }
      FUN_00d50b00();
    }
    else if (local_80 == 0) {
      return uVar13;
    }
    uVar12 = (uint)uVar13;
    if (0 < *(int *)(local_80 + 0xc)) {
      local_b8 = CONCAT44(local_b8._4_4_,param_3) & 0xffffffff000000ff;
      lVar14 = 0;
      do {
        uVar3 = *(void*)(*(int64_t *)(local_80 + 0x10) + lVar14 * 8);
        pvVar7 = _pthread_getspecific((void*)uVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150eff0();
        lVar8 = *(int64_t *)(*(int64_t *)(local_40 + 0x10) + lVar14 * 8);
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        local_100 = 0;
        uVar11 = (uint64_t)((void*)param_1 & 0xff);
        local_108 = uVar3;
        cVar5 = FUN_013157a0(uVar11,&local_108,local_b8 & 0xffffffff,param_4,lVar8,1);
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        uVar13 = uVar13 & 0xff;
        if (cVar5 == '\0') {
          uVar13 = 0;
        }
        uVar12 = (uint)uVar13;
        lVar14 = lVar14 + 1;
      } while ((int)lVar14 < *(int *)(local_80 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
    uVar13 = (uint64_t)uVar12;
  }
  return uVar13;
LAB_01315bc6:
  uVar12 = 0;
  if (local_40 == 0) goto LAB_01315958;
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01508450();
  if (local_40 == 0) {
    uVar6 = 0;
    goto LAB_0131604c;
  }
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01508450();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(pVar9);
  if ((pvVar7 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
    pVar9 = (void*)local_40;
  }
  FUN_0150fe10();
  local_b0 = local_40;
  local_54 = (byte)param_1;
  if (local_40 == 0) {
    lVar14 = *this_ptr;
    if (lVar14 == 0) {
      uVar6 = 0;
      goto LAB_0131604c;
    }
LAB_01315d45:
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      lVar14 = *this_ptr;
      lVar8 = FUN_00e8b990();
      if (lVar8 != 0) {
        lVar14 = *(int64_t *)(lVar14 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
    }
    lVar14 = *(int64_t *)(lVar14 + 0x40);
    if (lVar14 != 0) {
      FUN_00d50b00();
    }
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
joined_r0x01315f26:
    if (local_54 == 0) goto LAB_01316026;
    pvVar7 = _pthread_getspecific(pVar9);
    if ((pvVar7 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
      pVar9 = (void*)local_40;
    }
    local_e8 = local_40;
    local_e0 = '\0';
    FUN_0150d560();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_d8 = local_40;
    local_d0 = '\0';
    FUN_0150d3a0();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    lVar14 = *this_ptr;
    if (lVar14 != 0) {
      if (local_b0 == 0) goto LAB_01315d45;
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        lVar14 = *this_ptr;
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar14 = *(int64_t *)(lVar14 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar14 = *(int64_t *)(lVar14 + 0x40);
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pVar9 = (void*)lVar14;
      }
      FUN_015058d0();
      local_c0 = local_40;
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      local_f0 = 1;
      bVar4 = FUN_01315610();
      if (local_c0 != 0) {
        FUN_00d50b20();
      }
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
      local_54 = local_54 & bVar4;
      goto joined_r0x01315f26;
    }
LAB_01316026:
    uVar6 = 0;
  }
  if (local_b0 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
LAB_0131604c:
  local_38 = '\0';
  FUN_00d50b20();
  uVar12 = uVar6;
  goto LAB_01315958;
}

