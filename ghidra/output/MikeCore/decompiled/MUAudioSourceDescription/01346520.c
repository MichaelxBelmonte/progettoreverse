// Function: FUN_01346520
// Address: 01346520
// Size: 952 bytes
// Class: MUAudioSourceDescription


/* WARNING: Removing unreachable block (ram,0x01346776) */
/* WARNING: Removing unreachable block (ram,0x0134677f) */
/* WARNING: Removing unreachable block (ram,0x01346715) */
/* WARNING: Removing unreachable block (ram,0x0134671e) */
/* WARNING: Removing unreachable block (ram,0x013468a8) */
/* WARNING: Removing unreachable block (ram,0x013468b1) */
/* WARNING: Removing unreachable block (ram,0x0134665f) */
/* WARNING: Removing unreachable block (ram,0x01346648) */
/* WARNING: Removing unreachable block (ram,0x01346656) */
/* WARNING: Removing unreachable block (ram,0x013468cb) */

uint FUN_01346520(pthread_key_t param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  longlong local_50;
  char local_48;
  
  if (*unaff_RDI != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfdd0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 == 0) {
      if (param_2 != '\0') {
        param_1 = 0;
        cVar1 = FUN_01366cc0(0,0,param_3,param_4,0);
        if (cVar1 == '\0') {
          return 0;
        }
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_014bc070();
      if ((char)uVar2 == '\0') {
        plVar4 = (longlong *)FUN_00115860();
        (**(code **)(*plVar4 + 0x18))();
        pvVar3 = _pthread_getspecific(param_1);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          param_1 = (pthread_key_t)plVar4;
        }
        FUN_013dd650();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc440();
        plVar4 = (longlong *)*unaff_RDI;
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          plVar4 = (longlong *)*unaff_RDI;
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            plVar4 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
        }
        (**(code **)(*plVar4 + 0x3a0))();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de650();
        pvVar3 = _pthread_getspecific(param_1);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          param_1 = 0;
        }
        FUN_014bcf30();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfce0();
        FUN_00d50b20();
      }
      return uVar2 ^ 1;
    }
  }
  return 0;
}


