// Function: FUN_0051d3f0
// Address: 0051d3f0
// Size: 1121 bytes
// Class: MDPluginDocument


/* WARNING: Removing unreachable block (ram,0x0051d57b) */
/* WARNING: Removing unreachable block (ram,0x0051d587) */
/* WARNING: Removing unreachable block (ram,0x0051d53e) */
/* WARNING: Removing unreachable block (ram,0x0051d54a) */
/* WARNING: Removing unreachable block (ram,0x0051d49d) */
/* WARNING: Removing unreachable block (ram,0x0051d4ad) */
/* WARNING: Removing unreachable block (ram,0x0051d694) */
/* WARNING: Removing unreachable block (ram,0x0051d6a4) */

void FUN_0051d3f0(undefined4 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong in_RCX;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar6;
  longlong local_70;
  char local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_40;
  char local_38;
  
  pVar5 = (pthread_key_t)in_RCX;
  *(undefined4 *)(unaff_RDI + 0x290) = param_1;
  if (*(longlong *)(unaff_RDI + 0x278) == 0) {
    return;
  }
  local_60 = param_2;
  if ((*unaff_RSI != 0) || ((*param_2 != 0 && (*(int *)(*param_2 + 0xc) != 0)))) goto LAB_0051d42e;
  if ((DAT_0280a1d8 == 0) || (DAT_0280a1e1 == '\0')) {
    uVar6 = FUN_00e8cb50();
    pVar5 = (pthread_key_t)in_RCX;
    if (DAT_0280a1d8 == 0) {
      FUN_013133d0(uVar6,0);
      lVar4 = DAT_0280a1d8;
      if (DAT_0280a1d8 != local_40) {
        in_RCX = DAT_0280a1d8;
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_40;
            in_RCX = DAT_0280a1d8;
          }
        }
        else {
          local_38 = '\0';
          lVar4 = local_40;
        }
        DAT_0280a1d8 = lVar4;
        if (in_RCX != 0) {
          FUN_00d50b20();
          lVar4 = local_40;
        }
      }
      pVar5 = (pthread_key_t)in_RCX;
      if ((lVar4 != 0) && (DAT_0280a1e0 == '\0')) {
        DAT_0280a1e0 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_40;
      }
      if ((local_38 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      DAT_0280a1e1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_0280a1e1 = '\x01';
      FUN_00e8cb70();
    }
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  lVar4 = *unaff_RSI;
  if (lVar4 == local_40) {
    if (((char)unaff_RSI[1] != '\0') || (local_40 == 0)) goto LAB_0051d829;
    local_58 = unaff_RSI + 1;
    if (local_38 == '\0') {
      FUN_00d50b00();
      goto LAB_0051d822;
    }
  }
  else {
    local_58 = unaff_RSI + 1;
    lVar1 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = local_40;
      if (((char)lVar1 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
LAB_0051d822:
      *(undefined1 *)local_58 = 1;
LAB_0051d829:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0051d42e;
    }
    *unaff_RSI = local_40;
    if (((char)lVar1 != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)local_58 = 1;
LAB_0051d42e:
  if (*(char *)(unaff_RDI + 0x2e4) == '\0') {
    if (*unaff_RSI == 0) {
      FUN_012d1fd0();
    }
    else {
      FUN_012d1940();
    }
  }
  else {
    cVar2 = (**(code **)(**(longlong **)(unaff_RDI + 0x278) + 0x390))();
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(unaff_RDI + 0x278) + 0x370))();
    }
    if (*unaff_RSI == 0) {
      FUN_012d1fd0();
    }
    else {
      FUN_012d1940();
    }
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(unaff_RDI + 0x278) + 0x368))();
    }
  }
  FUN_00d403d0();
  lVar4 = DAT_0270b7f0;
  if (DAT_0270b7f0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_70 = 0;
  local_68 = '\0';
  FUN_00d40470(&local_70,&stack0xffffffffffffffb0,1,3);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}


