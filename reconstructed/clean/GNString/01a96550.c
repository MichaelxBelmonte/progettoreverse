// Function: FUN_01a96550
// Address: 01a96550
// Size: 1743 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01a96550(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int64_t lVar6;
  char cVar7;
  int iVar8;
  uint64_t uVar9;
  void *pvVar10;
  void* pVar11;
  int64_t *arg1;
  int64_t lVar12;
  bool bVar13;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float fStack_b4;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int local_50;
  
  FUN_01a58dc0();
  if (local_60 == '\0') {
    if (local_68 == (int64_t *)0x0) {
      return 0;
    }
    FUN_00d50b00();
  }
  else if (local_68 == (int64_t *)0x0) {
    return 0;
  }
  cVar7 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" + *local_68
                      ))();
  if (cVar7 == '\0') goto LAB_01a96bdd;
  FUN_01d3abf0();
  FUN_01e466c0();
  FUN_01a96f20();
  if (local_60 == '\0') {
    if (local_68 == (int64_t *)0x0) goto LAB_01a96721;
    FUN_00d50b00();
LAB_01a96620:
    (**(code **)(*local_68 + 0x928))();
    if ((local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    (**(code **)(*local_68 + 0xe20))();
    local_60 = '\0';
    cVar7 = FUN_00d24090();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar7 == '\0') {
      uVar9 = FUN_01d3b590();
      if ((uVar9 & 4) == 0) {
        (**(code **)(*local_68 + 0xda0))();
      }
      (**(code **)(*local_68 + 0xda8))();
    }
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    bVar5 = false;
  }
  else {
    if (local_68 != (int64_t *)0x0) goto LAB_01a96620;
LAB_01a96721:
    bVar5 = true;
  }
  iVar8 = FUN_01d3a5a0();
  if (((iVar8 == 1) && (iVar8 = FUN_01d3b630(), iVar8 == 1)) && (*param_2 != 0)) {
    iVar8 = FUN_01d3b620();
    if (iVar8 != 2) {
      FUN_01a58dc0();
      (**(code **)(*local_78 + 0xe30))();
      if ((local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d3abf0();
      FUN_01e466c0();
      fStack_b4 = extraout_XMM0_Db;
LAB_01a96800:
      lVar12 = *param_1;
      cVar7 = (char)param_1[1];
      lVar1 = *arg1;
      if (lVar1 == lVar12) {
        if (cVar7 != '\0') {
          if (((char)arg1[1] == '\0') && (lVar12 != 0)) {
            cVar7 = '\x01';
            FUN_00d50b00();
            goto LAB_01a96870;
          }
          goto LAB_01a96874;
        }
      }
      else {
        lVar6 = arg1[1];
        if ((cVar7 != '\0') && (lVar12 != 0)) {
          FUN_00d50b00();
        }
        *arg1 = lVar12;
        if (((char)lVar6 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_01a96870:
        *(char *)(arg1 + 1) = cVar7;
LAB_01a96874:
        lVar12 = *arg1;
      }
      if (lVar12 == 0) {
        (**(code **)(*local_68 + 0x658))();
        plVar2 = (int64_t *)*arg1;
        if (plVar2 == local_78) {
          if (((char)arg1[1] != '\0') || (local_78 == (int64_t *)0x0)) goto LAB_01a968dc;
          if (local_70 != '\0') goto LAB_01a968d3;
          FUN_00d50b00();
LAB_01a96931:
          *(void*)(arg1 + 1) = 1;
          lVar1 = *arg1;
        }
        else {
          lVar1 = arg1[1];
          if (local_70 == '\0') {
            if (local_78 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            *arg1 = (int64_t)local_78;
            if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01a96931;
          }
          *arg1 = (int64_t)local_78;
          if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01a968d3:
          *(void*)(arg1 + 1) = 1;
          local_70 = '\0';
LAB_01a968dc:
          lVar1 = *arg1;
        }
        if (lVar1 != 0) goto LAB_01a968e8;
        bVar13 = false;
LAB_01a96944:
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (!bVar13) goto LAB_01a96b3f;
      }
      else {
LAB_01a968e8:
        iVar8 = FUN_01d3a5a0();
        bVar13 = iVar8 != 6;
        if (lVar12 == 0) goto LAB_01a96944;
        if (iVar8 == 6) goto LAB_01a96b3f;
      }
      iVar8 = FUN_01d3a5a0();
      if (iVar8 == 5) {
        FUN_01d3abf0();
        FUN_01e466c0();
        dVar4 = (double)((extraout_XMM0_Db_00 - fStack_b4) / g_0241b664);
        dVar4 = (double)_exp2(SUB84(dVar4 + dVar4,0));
        fStack_b4 = extraout_XMM0_Db_00;
        if (local_68 != (int64_t *)0x0) {
          local_50 = -1;
          while (local_50 = local_50 + 1, local_50 < *(int *)((int64_t)local_68 + 0xc)) {
            pVar11 = (void*)local_68[2];
            pvVar10 = _pthread_getspecific(pVar11);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar7 = FUN_01299280();
            if (cVar7 != '\0') {
              pvVar10 = _pthread_getspecific(pVar11);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar3 = (double)FUN_0126e820();
              pvVar10 = _pthread_getspecific(pVar11);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0126e830(SUB84(dVar3 * dVar4,0));
            }
          }
          FUN_001159b0();
        }
      }
      goto LAB_01a96800;
    }
    (**(code **)(*local_68 + 0xe30))();
    if (local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_01a963f0();
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_01a96bcb:
  if (!bVar5) {
    FUN_00d50b20();
  }
LAB_01a96bdd:
  FUN_00d50b20();
  return 0;
LAB_01a96b3f:
  FUN_0199eb40();
  if (local_68 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  goto LAB_01a96bcb;
}

