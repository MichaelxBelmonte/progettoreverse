// Function: FUN_01a47310
// Address: 01a47310
// Size: 2090 bytes
// Class: Unknown


void FUN_01a47310(double param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *pvVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong **in_RCX;
  longlong lVar10;
  longlong *plVar11;
  longlong *unaff_RDI;
  double dVar12;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  double local_58;
  double local_50;
  char local_41;
  longlong *local_40;
  char local_38;
  
  lVar1 = *unaff_RDI;
  if (lVar1 != 0) {
    local_41 = 0.0 <= param_1;
    local_68 = param_1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar10 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar10 * 8);
        pvVar7 = _pthread_getspecific((pthread_key_t)in_RCX);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01268dd0();
        plVar5 = local_40;
        if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific((pthread_key_t)in_RCX);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        plVar11 = local_40;
        if (((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
           ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (longlong *)0x0)))) {
          FUN_00d50b20();
        }
        if (0.0 <= local_68) {
          if (plVar5 == (longlong *)0x0) {
            local_60 = 0;
          }
          else {
            local_60 = 0;
            uVar8 = FUN_00d50b00();
            dVar12 = 0.0;
            local_60 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
            local_58 = local_68;
            if (plVar5 != (longlong *)0x0) goto LAB_01a4756f;
          }
LAB_01a4778f:
          if (((DAT_02390448 < local_68) && (lVar2 != 0)) && (plVar5 == (longlong *)0x0)) {
            local_78 = plVar11;
            pvVar7 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013df480();
            pvVar7 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_58 = (double)FUN_01327990();
            pvVar7 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_50 = (double)FUN_01264170();
            pvVar7 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_70 = (double)FUN_013de9b0();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_01a47a10:
            dVar12 = (local_58 * local_68 * local_50) / local_70;
            bVar4 = true;
            bVar3 = true;
            goto joined_r0x01a47a32;
          }
          if ((lVar2 == 0 && local_41 == '\0') && (plVar5 != (longlong *)0x0)) {
            local_78 = plVar11;
            pvVar7 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013df480();
            pvVar7 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_58 = (double)FUN_01327990();
            pvVar7 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_50 = (double)FUN_01264170();
            pvVar7 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_70 = (double)FUN_013de9b0();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01a47a10;
          }
        }
        else {
          lVar9 = 0;
          if (lVar2 == 0) {
            local_60 = 0;
          }
          else {
            local_60 = 0;
            uVar8 = FUN_00d50b00();
            local_60 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
            lVar9 = lVar2;
          }
          pvVar7 = _pthread_getspecific((pthread_key_t)in_RCX);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar12 = (double)FUN_01264170();
          local_58 = dVar12 + local_68;
          if (lVar9 == 0) goto LAB_01a4778f;
LAB_01a4756f:
          local_78 = plVar11;
          local_50 = dVar12;
          pvVar7 = _pthread_getspecific((pthread_key_t)in_RCX);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264180();
          plVar11 = local_40;
          pvVar7 = _pthread_getspecific((pthread_key_t)in_RCX);
          plVar6 = local_40;
          if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), plVar11 = plVar6, lVar9 != 0)) {
            plVar11 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          }
          local_58 = (double)(**(code **)(*plVar11 + 0x380))(local_58);
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific((pthread_key_t)in_RCX);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264180();
          plVar11 = local_40;
          pvVar7 = _pthread_getspecific((pthread_key_t)in_RCX);
          plVar6 = local_40;
          if ((pvVar7 != (void *)0x0) &&
             (lVar9 = FUN_00e8b990(local_50), plVar11 = plVar6, lVar9 != 0)) {
            plVar11 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          }
          local_50 = (double)(**(code **)(*plVar11 + 0x380))(local_50);
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific((pthread_key_t)in_RCX);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013df480();
          pvVar7 = _pthread_getspecific((pthread_key_t)in_RCX);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_70 = (double)FUN_01327990();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          dVar12 = (local_58 - local_50) * local_70;
          bVar4 = false;
          bVar3 = false;
joined_r0x01a47a32:
          if ((longlong)dVar12 != 0) {
            local_a0 = '\0';
            local_98 = plVar5;
            local_90 = '\0';
            in_RCX = &local_98;
            local_a8 = lVar2;
            FUN_01320250(in_RCX,&local_a8);
            plVar11 = local_88;
            if (local_80 == '\0') {
              if (local_88 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_80 = '\0';
            }
            local_40 = plVar11;
            local_38 = '\0';
            FUN_00d21140();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar11 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            bVar3 = bVar4;
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
          }
          plVar11 = local_78;
          if ((char)local_60 != '\0' && !bVar3) {
            FUN_00d50b20();
          }
        }
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (plVar5 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  return;
}


