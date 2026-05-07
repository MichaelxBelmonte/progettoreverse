// Function: FUN_003a7cf0
// Address: 003a7cf0
// Size: 1680 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Removing unreachable block (ram,0x003a8272) */
/* WARNING: Removing unreachable block (ram,0x003a827b) */
/* WARNING: Removing unreachable block (ram,0x003a8286) */
/* WARNING: Removing unreachable block (ram,0x003a8292) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_003a7cf0(undefined8 param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *unaff_RDI;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (unaff_RDI[0x12] != 0) {
    uVar10 = (ulonglong)param_2;
    cVar2 = FUN_01e05890();
    if (cVar2 != '\0') {
      if ((char)param_2 != '\0') {
        FUN_003a7490();
        if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01caea70();
        cVar2 = FUN_00d8ca50();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          fVar12 = (float)FUN_01caeac0();
        }
        else {
          fVar11 = (float)FUN_01caeac0();
          fVar12 = DAT_023908d8;
          if (DAT_023908d8 <= fVar11) {
            fVar12 = fVar11;
          }
          fVar11 = DAT_023908dc;
          if (fVar12 <= DAT_023908dc) {
            fVar11 = fVar12;
          }
          fVar12 = (fVar11 / DAT_023908e0) * *(float *)(unaff_RDI + 0x19);
        }
        FUN_00d50b00();
        fVar11 = DAT_023945a4;
        if (DAT_023945a4 <= fVar12) {
          fVar11 = fVar12;
        }
        fVar12 = DAT_023b36e0;
        if (fVar11 <= DAT_023b36e0) {
          fVar12 = fVar11;
        }
        local_38[0] = '\0';
        plVar9 = unaff_RDI;
        do {
          (**(code **)(*plVar9 + 0x370))();
          if (local_48 == plVar9) {
            if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
              local_38[0] = '\x01';
              goto LAB_003a7e87;
            }
          }
          else {
            plVar9 = local_48;
            if (local_40[0] == '\0') {
              if (local_38[0] == '\0') {
                pcVar4 = local_38;
              }
              else {
                FUN_00d50b20();
                pcVar4 = local_38;
              }
            }
            else {
              if (local_38[0] != '\0') {
                FUN_00d50b20();
              }
              local_38[0] = '\x01';
LAB_003a7e87:
              local_38[0] = '\x01';
              pcVar4 = local_40;
            }
            *pcVar4 = '\0';
          }
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((DAT_026fddb0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
            _DAT_026e0ab8 = FUN_00015ff0();
            _DAT_026e0aa0 = "MDMetaWindowController";
            _DAT_026e0aa8 = 0x198;
            _DAT_026e0ab0 = FUN_0006dea0;
            _DAT_026e0ac0 = 0;
            uRam00000000026e0ac8 = 0;
            _DAT_026e0ad0 = 0;
            _DAT_026e0b48 = 0;
            uRam00000000026e0b50 = 0;
            _DAT_026e0b58 = 0;
            DAT_026e0b5a = 1;
            _DAT_026e0ad8 = 0;
            uRam00000000026e0ae0 = 0;
            _DAT_026e0ae8 = 0;
            uRam00000000026e0af0 = 0;
            _DAT_026e0af8 = 0;
            uRam00000000026e0b00 = 0;
            _DAT_026e0b08 = 0;
            uRam00000000026e0b10 = 0;
            _DAT_026e0b18 = 0;
            uRam00000000026e0b20 = 0;
            _DAT_026e0b28 = 0;
            uRam00000000026e0b30 = 0;
            _DAT_026e0b38 = 0;
            uRam00000000026e0b40 = 0;
            DAT_026e0b63 = 0;
            _DAT_026e0b5b = 0;
            ___cxa_guard_release();
          }
          plVar8 = &DAT_02802688;
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x360))();
            cVar2 = FUN_00e85ea0();
            plVar8 = (longlong *)&stack0xffffffffffffff90;
            if (cVar2 == '\0') {
              plVar8 = &DAT_02802688;
            }
          }
          if (*plVar8 != 0) {
            if ((local_38[0] == '\0') && (plVar9 != (longlong *)0x0)) {
              FUN_00d50b00();
            }
            goto LAB_003a7ffa;
          }
        } while (plVar9 != (longlong *)0x0);
        plVar9 = (longlong *)0x0;
LAB_003a7ffa:
        FUN_00d50b20();
        if (plVar9 == (longlong *)0x0) {
          bVar1 = true;
          uVar10 = 0;
        }
        else {
          FUN_006577f0();
          if (local_40[0] == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
              if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_003a805a;
            }
LAB_003a80af:
            bVar1 = true;
            uVar10 = 0;
          }
          else {
            if (local_48 == (longlong *)0x0) goto LAB_003a80af;
LAB_003a805a:
            pvVar5 = _pthread_getspecific((pthread_key_t)plVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012caf10();
            if (local_40[0] == '\0') {
              if (local_48 != (longlong *)0x0) {
                FUN_00d50b00();
                if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_003a80e2;
              }
LAB_003a8176:
              bVar1 = true;
              uVar10 = 0;
            }
            else {
              if (local_48 == (longlong *)0x0) goto LAB_003a8176;
LAB_003a80e2:
              plVar9 = local_48;
              if (*(char *)((longlong)unaff_RDI + 0xd1) == '\0') {
                pvVar5 = _pthread_getspecific((pthread_key_t)plVar8);
                if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                  plVar8 = local_48;
                }
                pVar7 = (pthread_key_t)plVar8;
                (**(code **)(*local_48 + 0x408))();
                uVar13 = FUN_016c25f0();
                pvVar5 = _pthread_getspecific(pVar7);
                if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                  plVar9 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
                }
                (**(code **)(*local_48 + 0x418))();
                uVar14 = FUN_016c25f0();
                uVar15 = (**(code **)(*local_48 + 0x3b0))();
                FUN_01c42b30(uVar15,(double)fVar12);
                pvVar5 = _pthread_getspecific(pVar7);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar13 = FUN_016c26c0(uVar13);
                pvVar5 = _pthread_getspecific(pVar7);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                bVar1 = false;
                uVar16 = FUN_016c26c0(uVar14);
                (**(code **)(*local_48 + 0x428))(uVar13,uVar16);
              }
              else {
                (**(code **)(*(longlong *)unaff_RDI[0x12] + 0x970))();
                plVar8 = (longlong *)unaff_RDI[0x1e];
                if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar8 != local_48) {
                  FUN_003a85d0(SUB84((double)fVar12,0));
                }
                *(undefined1 *)((longlong)unaff_RDI + 0xd1) = 0;
                bVar1 = true;
                if (unaff_RDI[0x1e] != 0) {
                  unaff_RDI[0x1e] = 0;
                  FUN_00d50b20();
                }
              }
              *(undefined4 *)(unaff_RDI + 0x19) = 0;
              uVar10 = CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (bVar1) goto LAB_003a8377;
      }
      uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
      goto LAB_003a8377;
    }
  }
  uVar10 = 0;
LAB_003a8377:
  return uVar10 & 0xffffffff;
}


