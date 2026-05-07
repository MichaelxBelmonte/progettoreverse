// Function: FUN_00088bb0
// Address: 00088bb0
// Size: 2548 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Removing unreachable block (ram,0x00089397) */
/* WARNING: Removing unreachable block (ram,0x000893a3) */
/* WARNING: Removing unreachable block (ram,0x0008912d) */
/* WARNING: Removing unreachable block (ram,0x00089139) */
/* WARNING: Removing unreachable block (ram,0x00089141) */
/* WARNING: Removing unreachable block (ram,0x00089170) */
/* WARNING: Removing unreachable block (ram,0x0008917c) */
/* WARNING: Removing unreachable block (ram,0x00088f79) */
/* WARNING: Removing unreachable block (ram,0x00088f85) */
/* WARNING: Removing unreachable block (ram,0x0008955a) */
/* WARNING: Removing unreachable block (ram,0x00089566) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00088bb0(undefined4 param_1)

{
  double dVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  longlong *unaff_RDI;
  longlong *plVar9;
  longlong *local_50;
  char local_48 [15];
  char local_39;
  char local_38 [8];
  
  local_39 = '\x01';
  if ((unaff_RDI[0x11] == 0) && (unaff_RDI[0x13] == 0)) {
    return;
  }
  FUN_01e561b0();
  if (local_48[0] == '\0') {
    if (local_50 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_50 == (longlong *)0x0) {
    return;
  }
  if (unaff_RDI[0x1e] == 0) goto LAB_00089591;
  FUN_00d50b00();
  local_38[0] = '\0';
  plVar9 = unaff_RDI;
  do {
    (**(code **)(*plVar9 + 0x370))();
    if (local_50 == plVar9) {
      if (((local_38[0] == '\0') && (local_50 != (longlong *)0x0)) && (local_48[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_00088cc7;
      }
    }
    else {
      plVar9 = local_50;
      if (local_48[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar5 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar5 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_00088cc7:
        local_38[0] = '\x01';
        pcVar5 = local_48;
      }
      *pcVar5 = '\0';
    }
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_026fddb0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
      cVar3 = FUN_00e85ea0();
      plVar8 = (longlong *)&stack0xffffffffffffff88;
      if (cVar3 == '\0') {
        plVar8 = &DAT_02802688;
      }
    }
    if (*plVar8 != 0) {
      if ((local_38[0] == '\0') && (plVar9 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      goto LAB_00088e45;
    }
  } while (plVar9 != (longlong *)0x0);
  plVar9 = (longlong *)0x0;
LAB_00088e45:
  FUN_00d50b20();
  if (plVar9 == (longlong *)0x0) goto LAB_00089591;
  FUN_006577f0();
  if (local_48[0] == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00088ea6;
    }
  }
  else if (local_50 != (longlong *)0x0) {
LAB_00088ea6:
    pvVar6 = _pthread_getspecific((pthread_key_t)plVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if (local_48[0] == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00088f1c;
      }
    }
    else if (local_50 != (longlong *)0x0) {
LAB_00088f1c:
      pVar7 = (pthread_key_t)plVar8;
      if ((longlong *)unaff_RDI[0x11] != (longlong *)0x0) {
        cVar3 = (**(code **)(*(longlong *)unaff_RDI[0x11] + 0xac8))();
        pVar7 = (pthread_key_t)plVar8;
        if (cVar3 == '\0') {
          dVar1 = (double)FUN_01c441c0(param_1,&stack0xffffffffffffff88);
          if (local_39 == '\0') {
LAB_00088f9e:
            pVar7 = 0;
          }
          else {
            if ((char)unaff_RDI[0x26] != '\0') {
              local_39 = '\0';
              goto LAB_00088f9e;
            }
            pVar7 = (pthread_key_t)CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
          }
          FUN_01e058a0();
          (**(code **)(*(longlong *)unaff_RDI[0x11] + 0x998))();
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar4 = FUN_016c2e90();
          if (iVar4 == 0) {
            if ((int)unaff_RDI[0x23] != -1) {
              *(undefined4 *)(unaff_RDI + 0x23) = 0xffffffff;
              unaff_RDI[0x22] = 0x405e000000000000;
              plVar9 = (longlong *)unaff_RDI[0x12];
              plVar8 = unaff_RDI;
              FUN_00d8ede0();
              pVar7 = (pthread_key_t)plVar8;
              if (local_48[0] == '\0') {
                if (local_50 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48[0] = '\0';
              }
              (**(code **)(*plVar9 + 0x958))();
              if (local_50 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              lVar2 = DAT_026fce10;
              plVar9 = (longlong *)unaff_RDI[0x11];
              if (DAT_026fce10 != 0) {
                FUN_00d50b00();
              }
              (**(code **)(*plVar9 + 0x958))();
              if (lVar2 != 0) {
                FUN_00d50b20();
              }
            }
          }
          else if (((dVar1 != (double)unaff_RDI[0x22]) ||
                   (NAN(dVar1) || NAN((double)unaff_RDI[0x22]))) || ((int)unaff_RDI[0x23] != 1)) {
            unaff_RDI[0x22] = (longlong)dVar1;
            *(undefined4 *)(unaff_RDI + 0x23) = 1;
            lVar2 = DAT_026d8918;
            plVar9 = (longlong *)unaff_RDI[0x12];
            if (DAT_026d8918 != 0) {
              FUN_00d50b00();
            }
            (**(code **)(*plVar9 + 0x958))();
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            plVar9 = (longlong *)unaff_RDI[0x11];
            (**(code **)(*(longlong *)unaff_RDI[0x21] + 0x378))((float)(double)unaff_RDI[0x22]);
            if (local_48[0] == '\0') {
              if (local_50 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48[0] = '\0';
            }
            (**(code **)(*plVar9 + 0x958))();
            if (local_50 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      if (((longlong *)unaff_RDI[0x13] != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*(longlong *)unaff_RDI[0x13] + 0xac8))(), cVar3 == '\0')) {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar4 = FUN_016c2e90();
        if (iVar4 == 0) {
          if (unaff_RDI[0x25] != 0) {
            unaff_RDI[0x25] = 0;
            FUN_00d50b20();
          }
          lVar2 = DAT_026fce10;
          plVar9 = (longlong *)unaff_RDI[0x13];
          if (DAT_026fce10 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar9 + 0x958))();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_01c456e0(param_1);
          if (local_48[0] == '\0') {
            if (((local_50 != (longlong *)0x0) && (FUN_00d50b00(), local_48[0] != '\0')) &&
               (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_48[0] = '\0';
          }
          plVar9 = (longlong *)unaff_RDI[0x25];
          if (local_50 == plVar9) {
LAB_0008956b:
            if (local_50 == (longlong *)0x0) goto LAB_00089579;
          }
          else {
            if (local_50 == (longlong *)0x0) {
LAB_00089508:
              unaff_RDI[0x25] = (longlong)local_50;
              if (plVar9 != (longlong *)0x0) {
                FUN_00d50b20();
              }
LAB_00089524:
              (**(code **)(*(longlong *)unaff_RDI[0x13] + 0x978))();
              goto LAB_0008956b;
            }
            if (plVar9 == (longlong *)0x0) {
              plVar9 = (longlong *)0x0;
LAB_000894f9:
              if (plVar9 != local_50) {
                FUN_00d50b00();
                goto LAB_00089508;
              }
              goto LAB_00089524;
            }
            FUN_00d50b00();
            cVar3 = (**(code **)(*local_50 + 0x50))();
            if (plVar9 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if (cVar3 == '\0') {
              plVar9 = (longlong *)unaff_RDI[0x25];
              goto LAB_000894f9;
            }
          }
          FUN_00d50b20();
        }
      }
LAB_00089579:
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00089591:
  FUN_00d50b20();
  return;
}


