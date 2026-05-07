// Function: FUN_01bc6fe0
// Address: 01bc6fe0
// Size: 3281 bytes
// Class: Unknown

void FUN_01bc6fe0(uint32_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  void*puVar6;
  void* in_ECX;
  int64_t *this_ptr;
  bool bVar7;
  int64_t local_98;
  char local_90;
  int64_t local_68;
  char local_60;
  int local_50;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*(int64_t *)this_ptr[0x2a] + 0x398))();
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_68 == 0) {
    bVar3 = true;
    lVar1 = this_ptr[0x2a];
  }
  else {
    local_50 = -1;
    bVar3 = true;
    while (local_50 = local_50 + 1, local_50 < *(int *)(local_68 + 0xc)) {
      pvVar5 = _pthread_getspecific((void*)*(void*)(local_68 + 0x10));
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_0126f420();
      if (cVar4 == '\0') {
        bVar3 = false;
      }
    }
    FUN_001159b0();
    FUN_00d50b20();
    lVar1 = this_ptr[0x2a];
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01bc5de0();
  FUN_01bc0990();
  lVar2 = this_ptr[0x2a];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  cVar4 = FUN_00d23d70();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    if (bVar3) {
      if ((g_028b5ea8 == (void*)0x0) || (g_028b5eb1 == '\0')) {
        FUN_00e8cb50();
        if (g_028b5ea8 == (void*)0x0) {
          puVar6 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar6 = &g_02572358;
          (*g_02572370)();
          if (g_028b5ea8 == puVar6) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
            bVar7 = g_028b5ea8 != (void*)0x0;
            g_028b5ea8 = puVar6;
            if (bVar7) {
              FUN_00d50b20();
            }
          }
          if (g_028b5eb0 == '\0') {
            g_028b5eb0 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar3) {
            FUN_00d50b20();
          }
          puVar6 = g_028b5ea8;
          if (g_028b5ea8 != (void*)0x0) {
            FUN_00d50b00();
          }
          lVar1 = g_027e56f8;
          if (g_027e56f8 != 0) {
            FUN_00d50b00();
          }
          FUN_01bca740();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if (puVar6 != (void*)0x0) {
            FUN_00d50b20();
          }
          g_028b5eb1 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028b5eb1 = '\x01';
          FUN_00e8cb70();
        }
      }
      if ((g_028b5eb8 == (void*)0x0) || (g_028b5ec1 == '\0')) {
        FUN_00e8cb50();
        if (g_028b5eb8 == (void*)0x0) {
          puVar6 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar6 = &g_02572358;
          (*g_02572370)();
          if (g_028b5eb8 == puVar6) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
            bVar7 = g_028b5eb8 != (void*)0x0;
            g_028b5eb8 = puVar6;
            if (bVar7) {
              FUN_00d50b20();
            }
          }
          if (g_028b5ec0 == '\0') {
            g_028b5ec0 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar3) {
            FUN_00d50b20();
          }
          puVar6 = g_028b5eb8;
          if (g_028b5eb8 != (void*)0x0) {
            FUN_00d50b00();
          }
          lVar1 = g_027e5700;
          if (g_027e5700 != 0) {
            FUN_00d50b00();
          }
          FUN_01bca740();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if (puVar6 != (void*)0x0) {
            FUN_00d50b20();
          }
          g_028b5ec1 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028b5ec1 = '\x01';
          FUN_00e8cb70();
        }
      }
      puVar6 = g_028b5ea8;
      if (g_028b5ea8 != (void*)0x0) {
        FUN_00d50b00();
      }
      FUN_019169b0(param_1,param_2,0,0);
      if (puVar6 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01d48b40(g_02390124);
      (**(code **)(*this_ptr + 0x640))();
      (**(code **)(*local_40 + 0x3a8))();
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01916470(param_1,param_2);
      FUN_01cfc6a0(g_02394288);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_01916970(param_1,param_2);
    }
  }
  else if (bVar3) {
    if ((g_028b5e88 == (void*)0x0) || (g_028b5e91 == '\0')) {
      FUN_00e8cb50();
      if (g_028b5e88 == (void*)0x0) {
        puVar6 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &g_02572358;
        (*g_02572370)();
        if (g_028b5e88 == puVar6) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
          bVar7 = g_028b5e88 != (void*)0x0;
          g_028b5e88 = puVar6;
          if (bVar7) {
            FUN_00d50b20();
          }
        }
        if (g_028b5e90 == '\0') {
          g_028b5e90 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar3) {
          FUN_00d50b20();
        }
        puVar6 = g_028b5e88;
        if (g_028b5e88 != (void*)0x0) {
          FUN_00d50b00();
        }
        lVar1 = g_027e56e8;
        if (g_027e56e8 != 0) {
          FUN_00d50b00();
        }
        FUN_01bca740();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (puVar6 != (void*)0x0) {
          FUN_00d50b20();
        }
        g_028b5e91 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028b5e91 = '\x01';
        FUN_00e8cb70();
      }
    }
    if ((g_028b5e98 == (void*)0x0) || (g_028b5ea1 == '\0')) {
      FUN_00e8cb50();
      if (g_028b5e98 == (void*)0x0) {
        puVar6 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &g_02572358;
        (*g_02572370)();
        if (g_028b5e98 == puVar6) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
          bVar7 = g_028b5e98 != (void*)0x0;
          g_028b5e98 = puVar6;
          if (bVar7) {
            FUN_00d50b20();
          }
        }
        if (g_028b5ea0 == '\0') {
          g_028b5ea0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar3) {
          FUN_00d50b20();
        }
        puVar6 = g_028b5e98;
        if (g_028b5e98 != (void*)0x0) {
          FUN_00d50b00();
        }
        lVar1 = g_027e56f0;
        if (g_027e56f0 != 0) {
          FUN_00d50b00();
        }
        FUN_01bca740();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (puVar6 != (void*)0x0) {
          FUN_00d50b20();
        }
        g_028b5ea1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028b5ea1 = '\x01';
        FUN_00e8cb70();
      }
    }
    puVar6 = g_028b5e88;
    if (g_028b5e88 != (void*)0x0) {
      FUN_00d50b00();
    }
    FUN_019169b0(param_1,param_2,0,0);
    if (puVar6 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01d48b40(g_02390124);
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_40 + 0x3a8))();
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01916470(param_1,param_2);
    FUN_01cfc6a0(g_02391090);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_01916970(param_1,param_2);
  }
  return;
}

