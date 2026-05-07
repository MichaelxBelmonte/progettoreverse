// Function: FUN_012e0640
// Address: 012e0640
// Size: 1232 bytes
// Class: MUAudioFileSource

void FUN_012e0640(void*param_1,uint64_t param_2,size_t param_3)

{
  uint64_t uVar1;
  int iVar2;
  void*puVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t *plVar7;
  bool bVar8;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*arg1 != 0) {
    if ((g_028aca30 == (void*)0x0) || (puVar3 = g_028aca30, g_028aca39 == '\0')) {
      FUN_00e8cb50();
      if (g_028aca30 == (void*)0x0) {
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        param_1 = &g_02572358;
        *puVar3 = &g_02572358;
        (*g_02572370)();
        bVar8 = g_028aca30 == (void*)0x0;
        g_028aca30 = puVar3;
        if (((bVar8) || (FUN_00d50b20(), g_028aca30 != (void*)0x0)) &&
           (g_028aca38 == '\0')) {
          g_028aca38 = '\x01';
          FUN_00e8cb90();
        }
        FUN_00d4efa0();
        lVar6 = g_027e1e80;
        if (g_027e1e80 != 0) {
          FUN_00d50b00();
        }
        FUN_00c837f0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d4efa0();
        lVar6 = g_027bf048;
        if (g_027bf048 != 0) {
          FUN_00d50b00();
        }
        FUN_00c837f0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d4efa0();
        lVar6 = g_027bf050;
        if (g_027bf050 != 0) {
          FUN_00d50b00();
        }
        FUN_00c837f0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        g_028aca39 = '\x01';
        FUN_00e8cb70();
        puVar3 = g_028aca30;
      }
      else {
        g_028aca39 = '\x01';
        FUN_00e8cb70();
        puVar3 = g_028aca30;
      }
    }
    g_028aca30 = puVar3;
    if (puVar3 != (void*)0x0) {
      if (0 < *(int *)((int64_t)puVar3 + 0xc)) {
        lVar6 = 0;
        do {
          uVar1 = *(void*)(puVar3[2] + lVar6 * 8);
          FUN_00c77cd0();
          FUN_00c7b220();
          iVar2 = FUN_00e82730();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          plVar7 = (int64_t *)*arg1;
          pvVar4 = _pthread_getspecific((void*)param_1);
          if (pvVar4 != (void *)0x0) {
            plVar7 = (int64_t *)*arg1;
            lVar5 = FUN_00e8b990();
            if (lVar5 != 0) {
              plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar7 + 0x218))();
          (**(code **)(*this_ptr + 0x218))();
          iVar2 = _memcmp(param_1,(void *)(int64_t)iVar2,param_3);
          if (iVar2 != 0) {
            param_1 = (void*)((int64_t)&MACH_HEADER.magic + 1);
            (**(code **)(*this_ptr + 0x208))(1,uVar1);
          }
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < *(int *)((int64_t)puVar3 + 0xc));
      }
      FUN_00cc1480();
    }
  }
  return;
}

