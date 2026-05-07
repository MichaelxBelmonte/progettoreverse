// Function: FUN_016f1d60
// Address: 016f1d60
// Size: 2059 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x016f2490) */
/* WARNING: Removing unreachable block (ram,0x016f249c) */
/* WARNING: Removing unreachable block (ram,0x016f23a0) */
/* WARNING: Removing unreachable block (ram,0x016f23ac) */
/* WARNING: Removing unreachable block (ram,0x016f1f28) */
/* WARNING: Removing unreachable block (ram,0x016f1f38) */
/* WARNING: Removing unreachable block (ram,0x016f2214) */
/* WARNING: Removing unreachable block (ram,0x016f2224) */
/* WARNING: Removing unreachable block (ram,0x016f2106) */
/* WARNING: Removing unreachable block (ram,0x016f2112) */
/* WARNING: Removing unreachable block (ram,0x016f217c) */
/* WARNING: Removing unreachable block (ram,0x016f2188) */
/* WARNING: Removing unreachable block (ram,0x016f2290) */
/* WARNING: Removing unreachable block (ram,0x016f229c) */
/* WARNING: Removing unreachable block (ram,0x016f2307) */
/* WARNING: Removing unreachable block (ram,0x016f2317) */
/* WARNING: Removing unreachable block (ram,0x016f241a) */
/* WARNING: Removing unreachable block (ram,0x016f2426) */
/* WARNING: Removing unreachable block (ram,0x016f2520) */
/* WARNING: Removing unreachable block (ram,0x016f252c) */

void FUN_016f1d60(pthread_key_t param_1)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong unaff_RSI;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined4 local_78;
  int iStack_74;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined4 local_50;
  int iStack_4c;
  longlong local_48;
  char local_40;
  int iVar8;
  
  local_54 = 0xffffffff;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_0165da90();
  if (cVar2 == '\0') {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar5 = &local_50;
    FUN_0165c0f0(puVar5,unaff_RSI,&local_78,&local_54);
    lVar1 = local_48;
    pVar4 = (pthread_key_t)puVar5;
    if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_0165da40();
    iVar8 = (int)((ulonglong)unaff_RSI >> 0x20);
    if (cVar2 == '\0') {
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar5 = &local_54;
      FUN_0165db00(puVar5,local_88);
      pVar4 = (pthread_key_t)puVar5;
      local_48 = unaff_RSI;
      FUN_00e7b970();
      local_70 = local_48;
      local_80 = FUN_0123fff0();
      local_48 = local_70;
      FUN_00e7b820();
      local_60 = local_48;
      FUN_0123ff00();
      FUN_0123fc50();
      local_68 = local_48;
      if (((local_40 == '\0') && (local_48 != 0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != 0)))) {
        FUN_00d50b20();
      }
      local_80 = FUN_0123fff0();
      FUN_00e7b970();
      FUN_0123ff00();
      FUN_0123fc50();
      lVar6 = local_48;
      if (((local_40 == '\0') && (local_48 != 0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != 0)))) {
        FUN_00d50b20();
      }
      if (((iVar8 == 0) || (iStack_4c == 0)) || (cVar2 = FUN_00e7c020(), cVar2 == '\0')) {
        if (((iStack_4c == 0) || (local_70._4_4_ == 0)) || (cVar2 = FUN_00e7c000(), cVar2 == '\0'))
        {
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar7 = local_70;
          FUN_0165b1b0(local_70,CONCAT44(iStack_4c,local_50),0);
          pVar4 = (pthread_key_t)lVar7;
        }
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar7 = unaff_RSI;
        FUN_0165b1b0(unaff_RSI,local_70,1);
        pvVar3 = _pthread_getspecific((pthread_key_t)lVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar7 = local_60;
        FUN_0165b1b0(local_60,unaff_RSI,1);
        pVar4 = (pthread_key_t)lVar7;
        if (((iStack_74 == 0) || (local_60._4_4_ == 0)) || (cVar2 = FUN_00e7c000(), cVar2 == '\0'))
        {
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0165b1b0(CONCAT44(iStack_74,local_78),local_60,0);
        }
      }
      else {
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar7 = unaff_RSI;
        FUN_0165b1b0(unaff_RSI,local_70,0);
        pvVar3 = _pthread_getspecific((pthread_key_t)lVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar7 = local_60;
        FUN_0165b1b0(local_60,unaff_RSI,1);
        pVar4 = (pthread_key_t)lVar7;
        if (((local_60._4_4_ == 0) || (iStack_4c == 0)) || (cVar2 = FUN_00e7c000(), cVar2 == '\0'))
        {
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0165b1b0(CONCAT44(iStack_74,local_78),local_60,0);
        }
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        FUN_00d50b20();
      }
    }
    else if (((iVar8 == 0) || (iStack_4c == 0)) || (cVar2 = FUN_00e7c020(), cVar2 == '\0')) {
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar6 = unaff_RSI;
      FUN_0165b1b0(unaff_RSI,CONCAT44(iStack_4c,local_50),0);
      pvVar3 = _pthread_getspecific((pthread_key_t)lVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0165b1b0(CONCAT44(iStack_74,local_78),unaff_RSI,0);
    }
    else {
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0165b1b0(CONCAT44(iStack_74,local_78),unaff_RSI,0);
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


