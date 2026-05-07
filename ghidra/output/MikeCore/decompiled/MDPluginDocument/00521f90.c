// Function: FUN_00521f90
// Address: 00521f90
// Size: 880 bytes
// Class: MDPluginDocument


/* WARNING: Removing unreachable block (ram,0x005222d6) */
/* WARNING: Removing unreachable block (ram,0x005222df) */

void FUN_00521f90(pthread_key_t param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  byte unaff_SIL;
  longlong unaff_RDI;
  double dVar5;
  undefined8 uVar6;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0xe8) != 0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x308);
    if ((lVar4 != 0) && ((unaff_SIL ^ 1) == 0)) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00b31a00();
      lVar4 = FUN_00bc4780();
      dVar5 = (double)FUN_00b335d0();
      FUN_012dd9d0();
      FUN_00018a90((double)(lVar4 + param_2) / dVar5);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar4 = *(longlong *)(unaff_RDI + 0x308);
    }
    if (lVar4 == 0) {
      uVar6 = FUN_0051b4f0();
      local_58 = 0;
      if (local_68 == '\0') {
        if (local_70 != 0) {
          uVar6 = FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_58 = '\x01';
      local_60 = local_70;
      FUN_012d2830(uVar6,&local_60);
      lVar4 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        cVar2 = FUN_01311c10();
        if (cVar2 != '\0') {
          FUN_01311bf0();
          *(undefined1 *)(unaff_RDI + 0x371) = 0;
        }
        FUN_00d50b20();
      }
    }
    cVar2 = (**(code **)(**(longlong **)(unaff_RDI + 0xe8) + 0x5e8))();
    if ((cVar2 != '\0') &&
       (cVar2 = (**(code **)(**(longlong **)(unaff_RDI + 0xe8) + 0x638))(), cVar2 == '\0')) {
      plVar1 = *(longlong **)(unaff_RDI + 0xe8);
      FUN_0141cb10();
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      (**(code **)(*plVar1 + 0x690))();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 0xa0) = 1;
      *(undefined2 *)(unaff_RDI + 0x24a) = 1;
    }
    if (*(longlong *)(unaff_RDI + 0x308) == 0 && (unaff_SIL ^ 1) == 0) {
      FUN_00521cd0();
    }
    FUN_0051f6c0();
  }
  if ((*(longlong *)(unaff_RDI + 0x278) != 0) && (0 < param_2)) {
    local_40 = FUN_00e313b0();
    do {
      cVar2 = FUN_00e31450(1,0);
      lVar4 = local_40;
    } while (cVar2 == '\0');
    if ((local_40 != 0) && (unaff_SIL == 0)) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x278) + 0x690))();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


