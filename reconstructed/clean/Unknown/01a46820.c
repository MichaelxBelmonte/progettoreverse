// Function: FUN_01a46820
// Address: 01a46820
// Size: 2025 bytes
// Class: Unknown

void FUN_01a46820(double param_1)

{
  int64_t lVar1;
  int64_t ****pppplVar2;
  int64_t ***ppplVar3;
  void *pvVar4;
  int64_t lVar5;
  uint64_t uVar6;
  void* pVar7;
  int64_t ****in_RCX;
  int64_t ****pppplVar8;
  int64_t *this_ptr;
  int64_t lVar9;
  int64_t ****pppplVar10;
  bool bVar11;
  double dVar12;
  int64_t ****extraout_XMM0_Qa;
  int64_t ****extraout_XMM0_Qa_00;
  int64_t ***local_98;
  char local_90;
  int64_t ***local_88;
  char local_80;
  int64_t ***local_78;
  char local_70;
  double local_68;
  double local_60;
  int64_t ***local_58;
  int64_t ***local_50;
  int64_t ***local_48;
  int64_t ***local_40;
  char local_38;
  
  lVar1 = *this_ptr;
  if (lVar1 != 0) {
    local_68 = param_1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar9 = 0;
      do {
        pppplVar2 = *(int64_t *****)(*(int64_t *)(lVar1 + 0x10) + lVar9 * 8);
        pvVar4 = _pthread_getspecific((void*)in_RCX);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01268710();
        pppplVar10 = (int64_t ****)local_40;
        if ((((local_38 == '\0') && ((int64_t ****)local_40 != (int64_t ****)0x0)) &&
            (FUN_00d50b00(), local_38 != '\0')) && ((int64_t ****)local_40 != (int64_t ****)0x0))
        {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific((void*)in_RCX);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        local_48 = local_40;
        if (((local_38 == '\0') && ((int64_t ****)local_40 != (int64_t ****)0x0)) &&
           ((FUN_00d50b00(), local_38 != '\0' && ((int64_t ****)local_40 != (int64_t ****)0x0))))
        {
          FUN_00d50b20();
        }
        pVar7 = (void*)in_RCX;
        if (local_68 <= g_02390448) {
          if (pppplVar10 != (int64_t ****)0x0) {
            pvVar4 = _pthread_getspecific(pVar7);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_50 = (int64_t ***)FUN_01264170();
            FUN_00d50b00();
            local_60 = (double)local_50 + local_68;
            local_58 = (int64_t ***)pppplVar10;
            goto LAB_01a46a42;
          }
          bVar11 = pppplVar2 == (int64_t ****)0x0;
joined_r0x01a46cc2:
          if ((local_68 < 0.0) && (!bVar11)) {
            pvVar4 = _pthread_getspecific(pVar7);
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              in_RCX = (int64_t ****)local_48;
            }
            FUN_013df480();
            pvVar4 = _pthread_getspecific((void*)in_RCX);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_60 = (double)FUN_01327990();
            pvVar4 = _pthread_getspecific((void*)in_RCX);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_58 = (int64_t ***)FUN_01264170();
            pvVar4 = _pthread_getspecific((void*)in_RCX);
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              in_RCX = (int64_t ****)local_48;
            }
            uVar6 = FUN_013de9b0();
            local_50 = (int64_t ***)extraout_XMM0_Qa_00;
            if ((local_38 != '\0') && ((int64_t ****)local_40 != (int64_t ****)0x0)) {
              uVar6 = FUN_00d50b20();
            }
            goto LAB_01a46ef7;
          }
        }
        else {
          if (pppplVar2 == (int64_t ****)0x0) {
            if (pppplVar10 == (int64_t ****)0x0) {
              bVar11 = true;
              goto joined_r0x01a46cc2;
            }
            pvVar4 = _pthread_getspecific(pVar7);
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              in_RCX = (int64_t ****)local_48;
            }
            FUN_013df480();
            pvVar4 = _pthread_getspecific((void*)in_RCX);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_60 = (double)FUN_01327990();
            pvVar4 = _pthread_getspecific((void*)in_RCX);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_58 = (int64_t ***)FUN_01264170();
            pvVar4 = _pthread_getspecific((void*)in_RCX);
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              in_RCX = (int64_t ****)local_48;
            }
            uVar6 = FUN_013de9b0();
            local_50 = (int64_t ***)extraout_XMM0_Qa;
            if ((local_38 != '\0') && ((int64_t ****)local_40 != (int64_t ****)0x0)) {
              uVar6 = FUN_00d50b20();
            }
LAB_01a46ef7:
            dVar12 = (local_60 * local_68 * (double)local_58) / (double)local_50;
            local_60 = (double)CONCAT44(local_60._4_4_,
                                        (int)CONCAT71((int7)((uint64_t)uVar6 >> 8),1));
            local_58 = (int64_t ***)0x0;
          }
          else {
            FUN_00d50b00();
            local_50 = (int64_t ***)0x0;
            local_60 = local_68;
            local_58 = (int64_t ***)pppplVar2;
LAB_01a46a42:
            pvVar4 = _pthread_getspecific((void*)in_RCX);
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              in_RCX = (int64_t ****)local_58;
            }
            FUN_01264180();
            pppplVar8 = (int64_t ****)local_40;
            pvVar4 = _pthread_getspecific((void*)in_RCX);
            ppplVar3 = local_40;
            if ((pvVar4 != (void *)0x0) &&
               (lVar5 = FUN_00e8b990(), pppplVar8 = (int64_t ****)ppplVar3, lVar5 != 0)) {
              pppplVar8 = (int64_t ****)ppplVar3[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            local_60 = (double)(*(*pppplVar8)[0x70])(local_60);
            if ((local_38 != '\0') && ((int64_t ****)local_40 != (int64_t ****)0x0)) {
              FUN_00d50b20();
            }
            pvVar4 = _pthread_getspecific((void*)in_RCX);
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              in_RCX = (int64_t ****)local_58;
            }
            FUN_01264180();
            pppplVar8 = (int64_t ****)local_40;
            pvVar4 = _pthread_getspecific((void*)in_RCX);
            ppplVar3 = local_40;
            if ((pvVar4 != (void *)0x0) &&
               (lVar5 = FUN_00e8b990(), pppplVar8 = (int64_t ****)ppplVar3, lVar5 != 0)) {
              pppplVar8 = (int64_t ****)ppplVar3[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            local_50 = (int64_t ***)(*(*pppplVar8)[0x70])(local_50);
            if ((local_38 != '\0') && ((int64_t ****)local_40 != (int64_t ****)0x0)) {
              FUN_00d50b20();
            }
            pvVar4 = _pthread_getspecific((void*)in_RCX);
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              in_RCX = (int64_t ****)local_48;
            }
            FUN_013df480();
            pvVar4 = _pthread_getspecific((void*)in_RCX);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar12 = (double)FUN_01327990();
            if ((local_38 != '\0') && ((int64_t ****)local_40 != (int64_t ****)0x0)) {
              FUN_00d50b20();
            }
            dVar12 = (local_60 - (double)local_50) * dVar12;
            local_60 = (double)((uint64_t)local_60 & 0xffffffff00000000);
          }
          if ((int64_t)dVar12 != 0) {
            local_50 = (int64_t ***)pppplVar10;
            local_98 = (int64_t ***)pppplVar10;
            local_90 = '\0';
            local_80 = '\0';
            in_RCX = &local_88;
            local_88 = (int64_t ***)pppplVar2;
            FUN_01320250(in_RCX,&local_98);
            ppplVar3 = local_78;
            if (local_70 == '\0') {
              if ((int64_t ****)local_78 != (int64_t ****)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_70 = '\0';
            }
            local_40 = ppplVar3;
            local_38 = '\0';
            FUN_00d21140();
            pppplVar10 = (int64_t ****)local_50;
            if ((local_38 != '\0') && ((int64_t ****)local_40 != (int64_t ****)0x0)) {
              FUN_00d50b20();
            }
            if ((int64_t ****)ppplVar3 != (int64_t ****)0x0) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && ((int64_t ****)local_78 != (int64_t ****)0x0)) {
              FUN_00d50b20();
            }
            if ((local_80 != '\0') && ((int64_t ****)local_88 != (int64_t ****)0x0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && ((int64_t ****)local_98 != (int64_t ****)0x0)) {
              FUN_00d50b20();
            }
          }
          if (local_60._0_1_ == '\0') {
            FUN_00d50b20();
          }
        }
        if ((int64_t ****)local_48 != (int64_t ****)0x0) {
          FUN_00d50b20();
        }
        if (pppplVar10 != (int64_t ****)0x0) {
          FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  return;
}

