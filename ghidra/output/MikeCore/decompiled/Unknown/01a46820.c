// Function: FUN_01a46820
// Address: 01a46820
// Size: 2025 bytes
// Class: Unknown


void FUN_01a46820(double param_1)

{
  longlong lVar1;
  longlong ****pppplVar2;
  longlong ***ppplVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 uVar6;
  pthread_key_t pVar7;
  longlong ****in_RCX;
  longlong ****pppplVar8;
  longlong *unaff_RDI;
  longlong lVar9;
  longlong ****pppplVar10;
  bool bVar11;
  double dVar12;
  longlong ****extraout_XMM0_Qa;
  longlong ****extraout_XMM0_Qa_00;
  longlong ***local_98;
  char local_90;
  longlong ***local_88;
  char local_80;
  longlong ***local_78;
  char local_70;
  double local_68;
  double local_60;
  longlong ***local_58;
  longlong ***local_50;
  longlong ***local_48;
  longlong ***local_40;
  char local_38;
  
  lVar1 = *unaff_RDI;
  if (lVar1 != 0) {
    local_68 = param_1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar9 = 0;
      do {
        pppplVar2 = *(longlong *****)(*(longlong *)(lVar1 + 0x10) + lVar9 * 8);
        pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01268710();
        pppplVar10 = (longlong ****)local_40;
        if ((((local_38 == '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) &&
            (FUN_00d50b00(), local_38 != '\0')) && ((longlong ****)local_40 != (longlong ****)0x0))
        {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        local_48 = local_40;
        if (((local_38 == '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) &&
           ((FUN_00d50b00(), local_38 != '\0' && ((longlong ****)local_40 != (longlong ****)0x0))))
        {
          FUN_00d50b20();
        }
        pVar7 = (pthread_key_t)in_RCX;
        if (local_68 <= DAT_02390448) {
          if (pppplVar10 != (longlong ****)0x0) {
            pvVar4 = _pthread_getspecific(pVar7);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_50 = (longlong ***)FUN_01264170();
            FUN_00d50b00();
            local_60 = (double)local_50 + local_68;
            local_58 = (longlong ***)pppplVar10;
            goto LAB_01a46a42;
          }
          bVar11 = pppplVar2 == (longlong ****)0x0;
joined_r0x01a46cc2:
          if ((local_68 < 0.0) && (!bVar11)) {
            pvVar4 = _pthread_getspecific(pVar7);
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              in_RCX = (longlong ****)local_48;
            }
            FUN_013df480();
            pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_60 = (double)FUN_01327990();
            pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_58 = (longlong ***)FUN_01264170();
            pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              in_RCX = (longlong ****)local_48;
            }
            uVar6 = FUN_013de9b0();
            local_50 = (longlong ***)extraout_XMM0_Qa_00;
            if ((local_38 != '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) {
              uVar6 = FUN_00d50b20();
            }
            goto LAB_01a46ef7;
          }
        }
        else {
          if (pppplVar2 == (longlong ****)0x0) {
            if (pppplVar10 == (longlong ****)0x0) {
              bVar11 = true;
              goto joined_r0x01a46cc2;
            }
            pvVar4 = _pthread_getspecific(pVar7);
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              in_RCX = (longlong ****)local_48;
            }
            FUN_013df480();
            pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_60 = (double)FUN_01327990();
            pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_58 = (longlong ***)FUN_01264170();
            pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              in_RCX = (longlong ****)local_48;
            }
            uVar6 = FUN_013de9b0();
            local_50 = (longlong ***)extraout_XMM0_Qa;
            if ((local_38 != '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) {
              uVar6 = FUN_00d50b20();
            }
LAB_01a46ef7:
            dVar12 = (local_60 * local_68 * (double)local_58) / (double)local_50;
            local_60 = (double)CONCAT44(local_60._4_4_,
                                        (int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1));
            local_58 = (longlong ***)0x0;
          }
          else {
            FUN_00d50b00();
            local_50 = (longlong ***)0x0;
            local_60 = local_68;
            local_58 = (longlong ***)pppplVar2;
LAB_01a46a42:
            pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              in_RCX = (longlong ****)local_58;
            }
            FUN_01264180();
            pppplVar8 = (longlong ****)local_40;
            pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
            ppplVar3 = local_40;
            if ((pvVar4 != (void *)0x0) &&
               (lVar5 = FUN_00e8b990(), pppplVar8 = (longlong ****)ppplVar3, lVar5 != 0)) {
              pppplVar8 = (longlong ****)ppplVar3[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            local_60 = (double)(*(code *)(*pppplVar8)[0x70])(local_60);
            if ((local_38 != '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) {
              FUN_00d50b20();
            }
            pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              in_RCX = (longlong ****)local_58;
            }
            FUN_01264180();
            pppplVar8 = (longlong ****)local_40;
            pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
            ppplVar3 = local_40;
            if ((pvVar4 != (void *)0x0) &&
               (lVar5 = FUN_00e8b990(), pppplVar8 = (longlong ****)ppplVar3, lVar5 != 0)) {
              pppplVar8 = (longlong ****)ppplVar3[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            local_50 = (longlong ***)(*(code *)(*pppplVar8)[0x70])(local_50);
            if ((local_38 != '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) {
              FUN_00d50b20();
            }
            pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              in_RCX = (longlong ****)local_48;
            }
            FUN_013df480();
            pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar12 = (double)FUN_01327990();
            if ((local_38 != '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) {
              FUN_00d50b20();
            }
            dVar12 = (local_60 - (double)local_50) * dVar12;
            local_60 = (double)((ulonglong)local_60 & 0xffffffff00000000);
          }
          if ((longlong)dVar12 != 0) {
            local_50 = (longlong ***)pppplVar10;
            local_98 = (longlong ***)pppplVar10;
            local_90 = '\0';
            local_80 = '\0';
            in_RCX = &local_88;
            local_88 = (longlong ***)pppplVar2;
            FUN_01320250(in_RCX,&local_98);
            ppplVar3 = local_78;
            if (local_70 == '\0') {
              if ((longlong ****)local_78 != (longlong ****)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_70 = '\0';
            }
            local_40 = ppplVar3;
            local_38 = '\0';
            FUN_00d21140();
            pppplVar10 = (longlong ****)local_50;
            if ((local_38 != '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) {
              FUN_00d50b20();
            }
            if ((longlong ****)ppplVar3 != (longlong ****)0x0) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && ((longlong ****)local_78 != (longlong ****)0x0)) {
              FUN_00d50b20();
            }
            if ((local_80 != '\0') && ((longlong ****)local_88 != (longlong ****)0x0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && ((longlong ****)local_98 != (longlong ****)0x0)) {
              FUN_00d50b20();
            }
          }
          if (local_60._0_1_ == '\0') {
            FUN_00d50b20();
          }
        }
        if ((longlong ****)local_48 != (longlong ****)0x0) {
          FUN_00d50b20();
        }
        if (pppplVar10 != (longlong ****)0x0) {
          FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  return;
}


