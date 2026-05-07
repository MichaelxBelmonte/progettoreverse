// Function: FUN_01c3aae0
// Address: 01c3aae0
// Size: 627 bytes
// Class: MUAudioSourcePrincipalItem


/* WARNING: Removing unreachable block (ram,0x01c3abd4) */
/* WARNING: Removing unreachable block (ram,0x01c3abdd) */

ulonglong FUN_01c3aae0(pthread_key_t param_1,char param_2)

{
  double dVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  float fVar6;
  double dVar7;
  longlong local_48;
  char local_40;
  
  FUN_01c39580();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      goto LAB_01c3ab24;
    }
  }
  else if (local_48 != 0) {
LAB_01c3ab24:
    FUN_01c399a0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
        goto LAB_01c3ab5a;
      }
LAB_01c3abb5:
      uVar5 = 0;
    }
    else {
      if (local_48 == 0) goto LAB_01c3abb5;
LAB_01c3ab5a:
      pvVar3 = _pthread_getspecific(param_1);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        param_1 = (pthread_key_t)local_48;
      }
      FUN_0125e7c0();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
          goto LAB_01c3abe2;
        }
LAB_01c3ac69:
        uVar5 = 0;
      }
      else {
        if (local_48 == 0) goto LAB_01c3ac69;
LAB_01c3abe2:
        FUN_01caeb00();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        uVar5 = CONCAT71((int7)((ulonglong)local_48 >> 8),local_48 != 0);
        if ((local_48 != 0) && (param_2 != '\0')) {
          fVar6 = (float)(**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x930))();
          pvVar3 = _pthread_getspecific(param_1);
          if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            param_1 = (pthread_key_t)local_48;
          }
          dVar7 = (double)(float)(~-(uint)(fVar6 <= 0.0) & (uint)fVar6);
          uVar2 = SUB84(DAT_0238fee8,0);
          if (dVar7 <= DAT_0238fee8) {
            uVar2 = SUB84(dVar7,0);
          }
          dVar7 = (double)FUN_012685b0(uVar2);
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar1 = (double)FUN_013de950();
          uVar2 = FUN_00e7d850(SUB84(dVar7 / dVar1,0));
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar5 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
          FUN_014bd010();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_01c3ad42;
  }
  uVar5 = 0;
LAB_01c3ad42:
  return uVar5 & 0xffffffff;
}


