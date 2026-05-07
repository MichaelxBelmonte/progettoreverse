// Function: FUN_01c76410
// Address: 01c76410
// Size: 867 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01c764cf) */
/* WARNING: Removing unreachable block (ram,0x01c764d8) */
/* WARNING: Removing unreachable block (ram,0x01c7665d) */
/* WARNING: Removing unreachable block (ram,0x01c76666) */
/* WARNING: Removing unreachable block (ram,0x01c765d3) */
/* WARNING: Removing unreachable block (ram,0x01c765e0) */

undefined8 FUN_01c76410(pthread_key_t param_1,int param_2)

{
  char cVar1;
  int extraout_var;
  void *pvVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong unaff_RDI;
  longlong lVar5;
  longlong local_48;
  char local_40;
  
  if (param_2 != 0) {
    lVar5 = *(longlong *)(unaff_RDI + 0x188);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    FUN_016cbba0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    FUN_01c45b80();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    lVar5 = *(longlong *)(unaff_RDI + 0x270);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    FUN_00d235a0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if (*(int *)(unaff_RDI + 0x268) == 1) {
      FUN_01caea20();
      FUN_00e7bcc0();
      uVar4 = *(uint *)(local_48 + 0xc);
      if (0 < (int)uVar4) {
        lVar5 = (ulonglong)uVar4 + 1;
        do {
          param_1 = (pthread_key_t)*(undefined8 *)(local_48 + 0x10);
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar3 = FUN_0190a000();
          if (((uVar3 >> 0x20 != 0) && (extraout_var != 0)) &&
             (cVar1 = FUN_00e7c000(), cVar1 != '\0')) {
            FUN_00d23620();
          }
          lVar5 = lVar5 + -1;
        } while (1 < lVar5);
        uVar4 = *(uint *)(local_48 + 0xc);
      }
      if (uVar4 != 0) {
        lVar5 = *(longlong *)(unaff_RDI + 0x188);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016fab40();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01c62c70();
    if (*(longlong *)(unaff_RDI + 0x188) != 0) {
      FUN_00d50b00();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c1150();
      FUN_00d50b20();
    }
    if (*(int *)(unaff_RDI + 0x268) != 0) {
      *(undefined4 *)(unaff_RDI + 0x268) = 0;
      (**(code **)(**(longlong **)(unaff_RDI + 0x158) + 0x478))();
      if (*(longlong *)(unaff_RDI + 0x158) != 0) {
        *(undefined8 *)(unaff_RDI + 0x158) = 0;
        FUN_00d50b20();
      }
      if (*(longlong *)(unaff_RDI + 0x270) != 0) {
        *(undefined8 *)(unaff_RDI + 0x270) = 0;
        FUN_00d50b20();
      }
      FUN_01e436c0();
      FUN_01c4d670();
    }
    if (local_48 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return 1;
}


