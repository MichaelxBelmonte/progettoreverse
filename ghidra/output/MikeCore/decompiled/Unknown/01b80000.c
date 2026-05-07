// Function: FUN_01b80000
// Address: 01b80000
// Size: 1467 bytes
// Class: Unknown


void FUN_01b80000(ulonglong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong *unaff_RDI;
  double dVar8;
  double local_88;
  double local_80;
  double local_78;
  longlong local_70;
  char local_68;
  undefined8 local_60;
  longlong *local_58;
  char local_50;
  double local_48;
  longlong *local_40;
  char local_38;
  
  if (unaff_RDI[0x2b] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    (**(code **)(*unaff_RDI + 0x978))();
    lVar1 = local_70;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      (**(code **)(*unaff_RDI + 0xa60))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_70 != 0) {
        uVar4 = FUN_00e7bdb0();
        uVar5 = FUN_00e7bdb0();
        local_68 = '\0';
        local_70 = 0;
        local_48 = (double)FUN_00e7bdb0();
        local_60 = (double)FUN_00e7bdb0();
LAB_01b800e0:
        do {
          pVar7 = (pthread_key_t)param_1;
          lVar1 = unaff_RDI[0x2b];
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          param_1 = uVar5;
          cVar3 = FUN_01252960(uVar5,uVar4,&local_70,&local_88);
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          pVar7 = (pthread_key_t)param_1;
          if (cVar3 == '\0') {
            if ((ulonglong)local_48 >> 0x20 != 0) {
              (**(code **)(*unaff_RDI + 0xa60))();
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_78 = (double)FUN_016c98e0();
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              (**(code **)(*unaff_RDI + 0x978))();
              local_48 = (double)(**(code **)(*local_40 + 0x940))();
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_48 = local_48 - local_78;
              if (0.0 < local_48) {
                (**(code **)(*unaff_RDI + 0x978))();
                plVar2 = local_40;
                (**(code **)(*unaff_RDI + 0x978))();
                dVar8 = (double)(**(code **)(*local_58 + 0x918))();
                (**(code **)(*plVar2 + 0x920))(local_48 + dVar8);
                if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*unaff_RDI + 0x978))();
                (**(code **)(*local_40 + 0x948))(local_78);
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            if (local_60._4_4_ != 0) {
              (**(code **)(*unaff_RDI + 0xa60))();
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_48 = (double)FUN_016c98e0();
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              (**(code **)(*unaff_RDI + 0x978))();
              local_78 = (double)(**(code **)(*local_40 + 0x940))();
              (**(code **)(*unaff_RDI + 0x978))();
              dVar8 = (double)(**(code **)(*local_58 + 0x918))();
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_48 = local_48 - (local_78 + dVar8);
              if (0.0 < local_48) {
                (**(code **)(*unaff_RDI + 0x978))();
                plVar2 = local_40;
                (**(code **)(*unaff_RDI + 0x978))();
                dVar8 = (double)(**(code **)(*local_58 + 0x918))();
                (**(code **)(*plVar2 + 0x920))(local_48 + dVar8);
                if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*unaff_RDI + 0x978))();
                (**(code **)(*local_58 + 0x958))();
                (**(code **)(*local_40 + 0x410))();
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            if (local_68 == '\0') {
              return;
            }
            if (local_70 == 0) {
              return;
            }
            FUN_00d50b20();
            return;
          }
        } while (local_70 == 0);
        param_1 = (ulonglong)local_88 >> 0x20;
        dVar8 = local_88;
        if ((ulonglong)local_48 >> 0x20 != 0) {
          dVar8 = local_48;
        }
        if (param_1 == 0) {
          dVar8 = local_48;
        }
        local_48 = dVar8;
        if ((ulonglong)local_80 >> 0x20 == 0) goto LAB_01b801d4;
        if ((ulonglong)dVar8 >> 0x20 == 0) {
          local_48 = local_80;
        }
        dVar8 = local_80;
        if ((ulonglong)local_60 >> 0x20 != 0) {
          dVar8 = local_60;
        }
        goto joined_r0x01b801ec;
      }
    }
  }
  return;
LAB_01b801d4:
  dVar8 = local_60;
  if ((ulonglong)local_60 >> 0x20 != 0) {
joined_r0x01b801ec:
    local_60 = dVar8;
    if ((param_1 != 0) && (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
      local_60 = local_88;
    }
    if ((((ulonglong)local_60 >> 0x20 != 0) && ((ulonglong)local_80 >> 0x20 != 0)) &&
       (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
      local_60 = local_80;
    }
  }
  goto LAB_01b800e0;
}


