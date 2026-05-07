// Function: FUN_018efa70
// Address: 018efa70
// Size: 1753 bytes
// Class: Unknown

void FUN_018efa70(void* param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  byte bVar3;
  char cVar4;
  int64_t *plVar5;
  void *pvVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar9;
  int64_t local_f8;
  char local_f0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  int64_t local_40;
  char local_38;
  
  if (*param_2 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    local_48 = param_2;
    if ((g_028b0690 == (int64_t *)0x0) || (g_028b0699 == '\0')) {
      FUN_00e8cb50();
      if (g_028b0690 == (int64_t *)0x0) {
        plVar5 = (int64_t *)FUN_00e8fc40();
        FUN_00022d50();
        (**(code **)(*plVar5 + 0x18))();
        bVar9 = g_028b0690 == (int64_t *)0x0;
        g_028b0690 = plVar5;
        if (((bVar9) || (FUN_00d50b20(), g_028b0690 != (int64_t *)0x0)) && (g_028b0698 == '\0')
           ) {
          g_028b0698 = '\x01';
          FUN_00e8cb90();
        }
        g_028b0699 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028b0699 = '\x01';
        FUN_00e8cb70();
      }
    }
    FUN_018f0650();
    lVar8 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar8 == 0) {
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar1 = arg1[3];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38 = '\x01';
      local_40 = lVar1;
      FUN_018ec350();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      plVar5 = local_58;
      local_a0 = 0;
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_a0 = '\x01';
      local_a8 = plVar5;
      bVar3 = (**(code **)(*arg1 + 0x3b8))();
      pVar7 = (void*)bVar3;
      FUN_018943d0(bVar3,&local_a8);
      plVar5 = local_68;
      if (local_60 == '\0') {
        if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
           (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (int64_t *)0x0) {
        cVar4 = (**(code **)(*plVar5 + 0x398))();
        if (cVar4 != '\0') {
          cVar4 = (**(code **)(*arg1 + 0x3b8))();
          if (cVar4 != '\0') {
            (**(code **)(*arg1 + 0x3e0))();
            local_98 = local_40;
            local_90 = 0;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_90 = '\x01';
            FUN_00ce9f70();
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            lVar1 = g_02704060;
            if (g_02704060 != 0) {
              FUN_00d50b00();
            }
            FUN_00cddf30();
            plVar2 = local_58;
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01893a50();
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_018babe0();
            local_70 = 0;
            if (local_b0 == '\0') {
              if (local_b8 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_b0 = '\0';
            }
            local_70 = '\x01';
            local_78 = local_b8;
            (**(code **)(*plVar2 + 0x400))();
            (**(code **)(*local_68 + 0x370))();
            local_88 = local_40;
            local_80 = 0;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_80 = '\x01';
            (**(code **)(*plVar5 + 0x378))();
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_f0 != '\0') && (local_f8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_00d94e90();
          if (local_40 != 0) {
            lVar8 = local_40;
            if (local_38 == '\0') {
              FUN_00d50b00();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
          }
        }
        FUN_00d50b20();
      }
    }
    if (lVar8 != 0) {
      FUN_018f0700();
    }
    *this_ptr = lVar8;
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}

