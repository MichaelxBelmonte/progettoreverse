// Function: FUN_01c77ec0
// Address: 01c77ec0
// Size: 1591 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


char FUN_01c77ec0(void* param_1,char param_2)

{
  int64_t lVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t *plVar8;
  void* pVar9;
  int64_t lVar10;
  char cVar11;
  int64_t this_ptr;
  char cVar12;
  int64_t local_a8;
  char local_a0;
  int64_t local_68;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar10 = local_58;
  if (*(int64_t *)(this_ptr + 0x2c8) == 0) {
    local_60 = *(int64_t *)(this_ptr + 0x198);
    if (local_60 == 0) {
      if (*(int64_t *)(this_ptr + 0x1a8) == 0) {
        cVar11 = '\x01';
        bVar3 = false;
        local_60 = 0;
      }
      else {
        FUN_00d50b00();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb480();
        if (local_50 == '\0') {
          if (local_58 == 0) goto LAB_01c78120;
          FUN_00d50b00();
LAB_01c77fd8:
          local_50 = '\0';
          local_58 = 0;
          local_40 = -1;
          bVar3 = false;
          local_60 = 0;
          while( true ) {
            lVar7 = (int64_t)local_40;
            local_40 = local_40 + 1;
            if (*(int *)(lVar10 + 0xc) <= local_40) break;
            lVar1 = *(int64_t *)(lVar10 + 0x10);
            local_58 = *(int64_t *)(lVar1 + 8 + lVar7 * 8);
            if (local_60 != 0) {
              cVar11 = '\0';
              lVar10 = lVar1;
              goto LAB_01c78133;
            }
            pvVar6 = _pthread_getspecific((void*)lVar1);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0124df10();
            if (local_a8 == 0) {
              local_60 = 0;
            }
            else {
              bVar3 = true;
              local_60 = local_a8;
              if (local_a0 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          cVar11 = '\x01';
LAB_01c78133:
          param_1 = (void*)lVar10;
          FUN_00115e00();
          FUN_00d50b20();
        }
        else {
          if (local_58 != 0) goto LAB_01c77fd8;
LAB_01c78120:
          cVar11 = '\x01';
          local_60 = 0;
          bVar3 = false;
        }
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      bVar3 = true;
      cVar11 = '\x01';
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    bVar3 = false;
    local_60 = 0;
    cVar11 = '\0';
  }
  lVar10 = local_58;
  cVar12 = '\0';
  if ((cVar11 != '\0') && (cVar12 = '\0', local_60 != 0)) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_0134a950();
    cVar12 = '\0';
    if (cVar4 == '\0') {
      cVar12 = cVar11;
    }
  }
  FUN_01caeae0();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_01caeae0();
    FUN_01d66ab0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  if (cVar12 != '\0') {
    FUN_0141b540();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
        goto LAB_01c7825d;
      }
    }
    else if (local_58 != 0) {
LAB_01c7825d:
      local_58 = 0;
      local_40 = -1;
      local_68 = 0;
      do {
        lVar7 = (int64_t)local_40;
        local_40 = local_40 + 1;
        bVar2 = 1;
        if (*(int *)(lVar10 + 0xc) <= local_40) goto LAB_01c7835a;
        local_58 = *(int64_t *)(*(int64_t *)(lVar10 + 0x10) + 8 + lVar7 * 8);
        pvVar6 = _pthread_getspecific((void*)*(int64_t *)(lVar10 + 0x10));
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar5 = FUN_0141bab0();
      } while (iVar5 != 3);
      lVar10 = local_58;
      if (local_58 == 0) {
        local_68 = 0;
      }
      else {
        FUN_00d50b00();
        bVar2 = 0;
        local_68 = local_58;
      }
LAB_01c7835a:
      pVar9 = (void*)lVar10;
      FUN_002a08f0();
      FUN_00d50b20();
      if (local_68 == 0) {
        cVar12 = '\0';
      }
      if ((param_2 != '\0') && (cVar12 != '\0')) {
        plVar8 = (int64_t *)FUN_00e8fc40();
        FUN_000fdf90();
        (**(code **)(*plVar8 + 0x18))();
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        FUN_013fb180();
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        FUN_01447a50();
        FUN_013fb350();
        (**(code **)(*plVar8 + 0x398))();
        FUN_01c4f640();
        FUN_00d50b20();
      }
      if (!(bool)(bVar2 | local_68 == 0)) {
        FUN_00d50b20();
      }
      goto LAB_01c784e2;
    }
  }
  cVar12 = '\0';
LAB_01c784e2:
  if ((bVar3) && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return cVar12;
}

