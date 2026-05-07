// Function: FUN_01badcd0
// Address: 01badcd0
// Size: 905 bytes
// Class: GNList


void FUN_01badcd0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong **pplVar8;
  longlong *unaff_RDI;
  longlong lVar9;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x630))();
  plVar2 = local_80;
  if (local_78 == '\0') {
    if (local_80 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_80 == (longlong *)0x0) {
    return;
  }
  local_78 = 0;
  local_80 = (longlong *)0x0;
  local_70 = plVar2;
  local_60 = 0;
  local_68 = 0;
  if (0 < *(int *)((longlong)plVar2 + 0xc)) {
    lVar9 = 0;
    do {
      plVar1 = *(longlong **)(plVar2[2] + lVar9 * 8);
      local_80 = plVar1;
      FUN_0006e1c0();
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar8 = &local_80;
        if (cVar4 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (*pplVar8 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_01baddfd;
        }
      }
      else {
        *(undefined1 *)(pplVar8 + 1) = 0;
        if (*pplVar8 != (longlong *)0x0) {
LAB_01baddfd:
          pVar7 = (pthread_key_t)pplVar8;
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          lVar3 = local_40;
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            lVar3 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            local_48 = lVar3;
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264240();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                goto LAB_01badfb0;
              }
            }
            else if (local_40 != 0) {
LAB_01badfb0:
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar5 = FUN_01326de0();
              if (iVar5 == 2) {
LAB_01bae01e:
                FUN_01bae1e0(DAT_023b7c10,0);
              }
              else {
                pvVar6 = _pthread_getspecific(pVar7);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                iVar5 = FUN_01326de0();
                if (iVar5 == 4) goto LAB_01bae01e;
              }
              FUN_00d50b20();
            }
            if (local_48 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
      }
      lVar9 = lVar9 + 1;
      local_68 = CONCAT44(local_68._4_4_,(int)lVar9);
    } while ((int)lVar9 < *(int *)((longlong)plVar2 + 0xc));
  }
  FUN_00083b20();
  FUN_00d50b20();
  return;
}


