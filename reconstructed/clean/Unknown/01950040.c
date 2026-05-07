// Function: FUN_01950040
// Address: 01950040
// Size: 1674 bytes
// Class: Unknown

void FUN_01950040(int64_t **param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  void *pvVar5;
  void* pVar6;
  int64_t **pplVar7;
  int64_t *this_ptr;
  int iVar8;
  int64_t local_138;
  char local_130;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  pvVar5 = _pthread_getspecific((void*)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar5 = _pthread_getspecific((void*)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if ((local_130 == '\0') && (local_138 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_138 != 0) {
    if (0 < *(int *)(local_138 + 0xc)) {
      iVar8 = 0;
      do {
        pvVar5 = _pthread_getspecific((void*)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f4ba0();
        lVar2 = g_027e0940;
        if (g_027e0940 != 0) {
          FUN_00d50b00();
        }
        FUN_000175c0();
        plVar1 = local_40;
        FUN_002771e0();
        param_1 = (int64_t **)&g_02802688;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar4 = FUN_00e85ea0();
          param_1 = &local_40;
          if (cVar4 == '\0') {
            param_1 = (int64_t **)&g_02802688;
          }
        }
        plVar1 = *param_1;
        if (*(char *)(param_1 + 1) == '\0') {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(param_1 + 1) = 0;
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*this_ptr + 0x970))();
          lVar2 = g_026f6f70;
          if (g_026f6f70 != 0) {
            FUN_00d50b00();
          }
          lVar3 = g_02729588;
          if (g_02729588 != 0) {
            FUN_00d50b00();
          }
          local_f0 = lVar3;
          local_e8 = '\x01';
          local_e0 = 0;
          local_d8 = '\0';
          FUN_00d31230(&local_e0,&local_f0);
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          FUN_0197ce50();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d8 != '\0') && (local_e0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d403d0();
          FUN_00d50b00();
          lVar2 = g_02729590;
          if (g_02729590 != 0) {
            FUN_00d50b00();
          }
          local_d0 = lVar2;
          local_c8 = '\x01';
          local_b8 = '\0';
          pplVar7 = &local_c0;
          local_c0 = plVar1;
          FUN_00d41430(pplVar7,&local_d0);
          pVar6 = (void*)pplVar7;
          if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (local_d0 != 0)) {
            FUN_00d50b20();
          }
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar5 = _pthread_getspecific(pVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0134a7e0();
          FUN_00d403d0();
          FUN_00d50b00();
          lVar2 = g_02729590;
          if (g_02729590 != 0) {
            FUN_00d50b00();
          }
          local_b0 = lVar2;
          local_a8 = '\x01';
          local_98 = '\0';
          param_1 = &local_a0;
          local_a0 = plVar1;
          FUN_00d41040(param_1,&local_b0);
          if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*this_ptr + 0x970))();
          local_90 = 0;
          local_88 = '\0';
          FUN_0197ce50();
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*this_ptr + 0x970))();
          FUN_0197c970();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(local_138 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  (**(code **)(&g_000017b8 + *this_ptr))();
  return;
}

