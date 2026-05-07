// Function: FUN_019ad9b0
// Address: 019ad9b0
// Size: 1065 bytes
// Class: MUEditorSubview

void FUN_019ad9b0(int64_t param_1,double param_2)

{
  int64_t *plVar1;
  bool bVar2;
  char *pcVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  char in_DL;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t lVar8;
  double dVar9;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  double dVar10;
  float local_88;
  int64_t local_68;
  char local_60 [8];
  double local_58;
  uint64_t uStack_50;
  double local_40;
  char local_38 [8];
  
  if ((*arg1 != 0) && (*(int *)(*arg1 + 0xc) != 0)) {
    FUN_01e436c0();
    dVar10 = param_2;
    FUN_00d23310();
    local_38[0] = local_60[0];
    pcVar3 = local_60;
    if (local_60[0] == '\0') {
      pcVar3 = local_38;
    }
    *pcVar3 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_58 = (double)FUN_0125a280();
    uStack_50 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
    if ((local_38[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    pcVar3 = local_60;
    if (local_60[0] == '\0') {
      pcVar3 = local_38;
    }
    local_38[0] = local_60[0];
    *pcVar3 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = (double)FUN_01259520();
    if ((local_38[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    lVar5 = *arg1;
    if (*(int *)(lVar5 + 0xc) < 2) {
      bVar2 = false;
      lVar8 = 0;
    }
    else {
      lVar7 = 1;
      lVar8 = 0;
      bVar2 = false;
      do {
        pVar6 = (void*)param_1;
        lVar5 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + lVar7 * 8);
        if (lVar8 == lVar5) {
          if ((!bVar2) && (lVar8 != 0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (lVar8 != 0)) {
            FUN_00d50b20();
            bVar2 = true;
            lVar8 = lVar5;
          }
          else {
            bVar2 = true;
            lVar8 = lVar5;
          }
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_0125a280();
        dVar10 = local_58;
        if (dVar9 < local_58) {
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_58 = (double)FUN_0125a280();
          uStack_50 = CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_01259520();
        if (local_40 < dVar9) {
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_40 = (double)FUN_01259520();
        }
        lVar7 = lVar7 + 1;
        lVar5 = *arg1;
        param_1 = (int64_t)*(int *)(lVar5 + 0xc);
      } while (lVar7 < param_1);
    }
    if (in_DL != '\0') {
      local_88 = SUB84(param_2,0);
      dVar9 = (double)(local_88 / g_0241b640) * g_023908b8;
      local_58 = (double)(~-(uint64_t)(local_58 < g_0238fee8) & (uint64_t)local_58);
      local_40 = local_40 + g_0238fee8;
      dVar10 = local_40 - local_58;
      uStack_50 = 0;
      if (dVar9 < dVar10) {
        local_40 = dVar9 + local_58;
      }
    }
    (**(code **)(*this_ptr + 0x540))();
    (**(code **)(*this_ptr + 0xa48))();
    if (local_58 < local_40) {
      plVar1 = (int64_t *)this_ptr[0x27];
      FUN_01e436c0();
      (**(code **)(*plVar1 + 0x3f0))(SUB84(local_58,0),local_40 - local_58,dVar10);
    }
    (**(code **)(*this_ptr + 0x540))();
    (**(code **)(*this_ptr + 0xa48))();
    if (local_58 < local_40) {
      FUN_00e7b500(SUB84(local_58,0),local_40 - local_58);
      (**(code **)(*this_ptr + 0xa78))();
    }
    if ((bVar2) && (lVar8 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

