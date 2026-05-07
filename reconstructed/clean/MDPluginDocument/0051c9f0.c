// Function: FUN_0051c9f0
// Address: 0051c9f0
// Size: 1109 bytes
// Class: MDPluginDocument

void FUN_0051c9f0(void)

{
  char cVar1;
  void*******pppppppuVar2;
  int64_t lVar3;
  void *pvVar4;
  void* pVar5;
  void*******pppppppuVar7;
  int iVar8;
  int64_t this_ptr;
  double dVar9;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  void******local_90;
  char local_88;
  void******local_80;
  char local_78;
  double local_70;
  void******local_68;
  void******local_60;
  void******local_58;
  char local_50;
  void******local_48;
  uint64_t local_40;
  int local_38;
  void******ppppppuVar6;
  
  FUN_012d2610();
  ppppppuVar6 = local_58;
  if (local_50 == '\0') {
    if ((void*******)local_58 == (void*******)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_50 != '\0') && ((void*******)local_58 != (void*******)0x0)) {
      FUN_00d50b20();
    }
  }
  else if ((void*******)local_58 == (void*******)0x0) {
    return;
  }
  if (*(int *)((int64_t)ppppppuVar6 + 0xc) == 0) goto LAB_0051ce4e;
  local_68 = ppppppuVar6;
  pppppppuVar2 = (void*******)FUN_00e8fc40();
  FUN_00d4ff40();
  *pppppppuVar2 = (void******)&g_02572358;
  (*g_02572370)();
  local_50 = '\0';
  local_58 = (void******)0x0;
  local_48 = ppppppuVar6;
  local_40 = 0xffffffff;
  local_38 = 0;
  local_40._4_4_ = 0;
  local_60 = pppppppuVar2;
  while( true ) {
    if (local_40._4_4_ != 0) {
      if (local_40._4_4_ < 1) {
        iVar8 = -local_40._4_4_;
      }
      else {
        iVar8 = (int)local_40 - local_40._4_4_;
        local_40 = CONCAT44(local_40._4_4_,iVar8);
        FUN_00d23690();
        local_38 = local_38 + local_40._4_4_;
        iVar8 = 0;
      }
      local_40 = CONCAT44(iVar8,(int)local_40);
    }
    lVar3 = (int64_t)(int)local_40;
    iVar8 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar8);
    if (*(int *)((int64_t)local_48 + 0xc) <= iVar8) break;
    ppppppuVar6 = (void******)local_48[2];
    local_58 = (void******)ppppppuVar6[lVar3 + 1];
    pvVar4 = _pthread_getspecific((void*)ppppppuVar6);
    pVar5 = (void*)ppppppuVar6;
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f7cb0();
    local_90 = local_60;
    local_88 = '\0';
    FUN_012f0960(&local_90,0);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && ((void*******)local_90 != (void*******)0x0)) {
      FUN_00d50b20();
    }
  }
  pppppppuVar2 = (void*******)local_48;
  FUN_000be170();
  pppppppuVar7 = (void*******)local_68;
  if (*(int64_t *)(this_ptr + 0x108) != 0) {
    FUN_00d50b00();
    FUN_00756eb0();
    ppppppuVar6 = local_58;
    if (local_50 == '\0') {
      if (local_58 != (void******)0x0) {
        FUN_00d50b00();
        if ((local_50 != '\0') && (local_58 != (void******)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0051cc5d;
      }
    }
    else if (local_58 != (void******)0x0) {
LAB_0051cc5d:
      cVar1 = (*(*ppppppuVar6)[0x73])();
      if (cVar1 == '\0') {
        local_70 = (double)(*(*ppppppuVar6)[0x76])();
        local_50 = '\0';
        local_58 = (void******)0x0;
        local_48 = pppppppuVar7;
        local_38 = 0;
        local_40 = 0;
        if (0 < *(int *)((int64_t)pppppppuVar7 + 0xc)) {
          lVar3 = 0;
          do {
            local_58 = (void******)pppppppuVar7[2][lVar3];
            pvVar4 = _pthread_getspecific((void*)pppppppuVar2);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar9 = (double)FUN_012f7cb0();
            if (dVar9 <= local_70) {
              pvVar4 = _pthread_getspecific((void*)pppppppuVar2);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar9 = (double)FUN_012f9490();
              if (local_70 < dVar9) {
                pvVar4 = _pthread_getspecific((void*)pppppppuVar2);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_80 = local_60;
                local_78 = '\0';
                pppppppuVar2 = &local_80;
                FUN_012f0960(local_70,0);
                if ((local_a0 != '\0') && (local_a8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_78 != '\0') && ((void*******)local_80 != (void*******)0x0))
                {
                  FUN_00d50b20();
                }
              }
            }
            lVar3 = lVar3 + 1;
            local_40 = CONCAT44(local_40._4_4_,(int)lVar3);
            pppppppuVar7 = (void*******)local_68;
          } while ((int)lVar3 < *(int *)((int64_t)local_68 + 0xc));
        }
        FUN_000be170();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  local_58 = local_60;
  local_50 = '\0';
  FUN_00d243f0();
  if ((local_50 != '\0') && ((void*******)local_58 != (void*******)0x0)) {
    FUN_00d50b20();
  }
  if ((void*******)local_60 != (void*******)0x0) {
    FUN_00d50b20();
  }
LAB_0051ce4e:
  FUN_00d50b20();
  return;
}

