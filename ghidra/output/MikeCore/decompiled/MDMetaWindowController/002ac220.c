// Function: FUN_002ac220
// Address: 002ac220
// Size: 2431 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x002aca44) */
/* WARNING: Removing unreachable block (ram,0x002aca4d) */
/* WARNING: Removing unreachable block (ram,0x002ac96f) */
/* WARNING: Removing unreachable block (ram,0x002ac97b) */
/* WARNING: Removing unreachable block (ram,0x002ac753) */
/* WARNING: Removing unreachable block (ram,0x002ac8aa) */
/* WARNING: Removing unreachable block (ram,0x002ac8af) */
/* WARNING: Removing unreachable block (ram,0x002ac8b7) */
/* WARNING: Removing unreachable block (ram,0x002ac75b) */
/* WARNING: Removing unreachable block (ram,0x002ac3d3) */
/* WARNING: Removing unreachable block (ram,0x002ac3df) */
/* WARNING: Removing unreachable block (ram,0x002ac32f) */
/* WARNING: Removing unreachable block (ram,0x002ac33b) */
/* WARNING: Removing unreachable block (ram,0x002ac388) */
/* WARNING: Removing unreachable block (ram,0x002ac394) */
/* WARNING: Removing unreachable block (ram,0x002ac40a) */
/* WARNING: Removing unreachable block (ram,0x002ac416) */
/* WARNING: Removing unreachable block (ram,0x002ac91d) */
/* WARNING: Removing unreachable block (ram,0x002ac929) */
/* WARNING: Removing unreachable block (ram,0x002ac892) */
/* WARNING: Removing unreachable block (ram,0x002ac9dd) */
/* WARNING: Removing unreachable block (ram,0x002ac9e2) */
/* WARNING: Removing unreachable block (ram,0x002ac9ea) */
/* WARNING: Removing unreachable block (ram,0x002ac89a) */
/* WARNING: Removing unreachable block (ram,0x002aca8b) */
/* WARNING: Removing unreachable block (ram,0x002aca94) */

void FUN_002ac220(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  char *pcVar8;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_f8;
  char local_f0;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*param_2 == 0) {
    FUN_002aea00();
    plVar2 = (longlong *)*param_2;
    if (plVar2 == local_48) {
      if (((char)param_2[1] == '\0') && (local_48 != (longlong *)0x0)) {
        param_1 = param_2;
        if (local_40[0] == '\0') {
          FUN_00d50b00();
        }
        goto LAB_002ac2e4;
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar3 = param_2[1];
      if (local_40[0] == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *param_2 = (longlong)local_48;
        if (((char)lVar3 != '\0') && (plVar2 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        *param_2 = (longlong)local_48;
        if (((char)lVar3 != '\0') && (plVar2 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_002ac2e4:
      *(undefined1 *)(param_2 + 1) = 1;
    }
    (**(code **)(*(longlong *)*param_2 + 0x460))();
  }
  (**(code **)(*unaff_RDI + 0x5f0))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x600))();
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  FUN_00639330();
  (**(code **)(*(longlong *)*param_2 + 0x600))();
  FUN_00637c40();
  cVar4 = FUN_00763980();
  if ((cVar4 == '\0') && ((**(code **)(*(longlong *)*unaff_RSI + 0x468))(), local_f8 != 0)) {
    cVar5 = '\0';
LAB_002ac47e:
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01f27fe0();
    cVar5 = (**(code **)(*local_48 + 0x450))();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') goto LAB_002ac47e;
  }
  if (cVar5 == '\0') {
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_48 + 0x450))();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pVar7 = (pthread_key_t)param_1;
    if (cVar4 != '\0') {
      FUN_00757c60();
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      if (local_40[0] == '\0') {
        if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pVar7 = (pthread_key_t)param_1;
      if (local_48 != (longlong *)0x0) {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        iVar1 = *(int *)((longlong)local_48 + 0xc);
        if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
        pVar7 = (pthread_key_t)param_1;
        if (iVar1 == 1) {
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6160();
          FUN_00d23310();
          pVar7 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_40[0]);
          pcVar8 = local_38;
          if (local_40[0] != '\0') {
            pcVar8 = local_40;
          }
          local_38[0] = local_40[0];
          *pcVar8 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (local_48 == (longlong *)0x0) goto LAB_002acad3;
          FUN_004f9670();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_48 != (longlong *)0x0) {
            FUN_006500a0();
            if (local_40[0] == '\0') {
              if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
                 (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40[0] = '\0';
            }
            if (local_48 != (longlong *)0x0) {
              cVar4 = FUN_003b7710();
              if ((cVar4 == '\0') && (cVar4 = FUN_003b7780(), cVar4 == '\0')) {
                FUN_003b72f0();
              }
              FUN_00d50b20();
            }
          }
        }
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00757c60();
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    if (local_40[0] == '\0') {
      if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pVar7 = (pthread_key_t)param_1;
    if (local_48 != (longlong *)0x0) {
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      iVar1 = *(int *)((longlong)local_48 + 0xc);
      if (local_40[0] != '\0') {
        FUN_00d50b20();
      }
      pVar7 = (pthread_key_t)param_1;
      if (iVar1 == 0) {
        FUN_00d50b20();
        goto LAB_002acad3;
      }
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      FUN_00d23310();
      pVar7 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_40[0]);
      pcVar8 = local_38;
      if (local_40[0] != '\0') {
        pcVar8 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar8 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if (local_48 != (longlong *)0x0) {
      FUN_004f9670();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 != (longlong *)0x0) {
        FUN_006500a0();
        if (local_40[0] == '\0') {
          if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
             (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
        }
        if (local_48 != (longlong *)0x0) {
          FUN_003b72f0();
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
  }
LAB_002acad3:
  FUN_00757c60();
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar4 = FUN_012ccb50();
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00643690();
  }
  FUN_002aeac0();
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


