// Function: FUN_00240730
// Address: 00240730
// Size: 836 bytes
// Class: MDTestValuesController
// String references:
//   "MDTestValuesController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00240730(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong unaff_RDI;
  longlong **pplVar6;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_38;
  char local_30;
  
  if (*(longlong *)(unaff_RDI + 0x88) == 0) {
    cVar4 = '\0';
    lVar3 = DAT_026f6ea8;
  }
  else {
    FUN_01e56750();
    cVar4 = FUN_01e5c7e0();
    lVar3 = DAT_026f6ea8;
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
      lVar3 = DAT_026f6ea8;
    }
  }
  DAT_026f6ea8 = lVar3;
  if (param_2 == '\0') goto LAB_0024094a;
  if (*(longlong **)(unaff_RDI + 0x88) == (longlong *)0x0) {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    local_68 = 0;
    local_60 = '\0';
    local_58 = 0;
    local_50 = '\0';
    pplVar6 = &local_38;
    FUN_01e4fcf0(&local_58,&local_68);
    plVar2 = local_38;
    if ((DAT_02710cf0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_026f9018 = FUN_00275010();
      _DAT_026f9000 = "MDTestValuesController";
      _DAT_026f9008 = 0xa8;
      _DAT_026f9010 = FUN_00274fe0;
      _DAT_026f9020 = 0;
      uRam00000000026f9028 = 0;
      _DAT_026f9030 = 0;
      _DAT_026f90a8 = 0;
      uRam00000000026f90b0 = 0;
      _DAT_026f90b8 = 0;
      DAT_026f90ba = 1;
      _DAT_026f9038 = 0;
      uRam00000000026f9040 = 0;
      _DAT_026f9048 = 0;
      uRam00000000026f9050 = 0;
      _DAT_026f9058 = 0;
      uRam00000000026f9060 = 0;
      _DAT_026f9068 = 0;
      uRam00000000026f9070 = 0;
      _DAT_026f9078 = 0;
      uRam00000000026f9080 = 0;
      _DAT_026f9088 = 0;
      uRam00000000026f9090 = 0;
      _DAT_026f9098 = 0;
      uRam00000000026f90a0 = 0;
      DAT_026f90c3 = 0;
      _DAT_026f90bb = 0;
      ___cxa_guard_release();
    }
    if (plVar2 == (longlong *)0x0) {
LAB_00240830:
      pplVar6 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar2 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_00240830;
    }
    plVar1 = *(longlong **)(unaff_RDI + 0x88);
    plVar2 = *pplVar6;
    if (plVar1 != plVar2) {
      if (*(char *)(pplVar6 + 1) == '\0') {
        if (plVar2 == (longlong *)0x0) {
          *(undefined8 *)(unaff_RDI + 0x88) = 0;
        }
        else {
          FUN_00d50b00();
          plVar1 = *(longlong **)(unaff_RDI + 0x88);
          *(longlong **)(unaff_RDI + 0x88) = *pplVar6;
        }
      }
      else {
        *(undefined1 *)(pplVar6 + 1) = 0;
        *(longlong **)(unaff_RDI + 0x88) = plVar2;
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else if (cVar4 != '\0') {
    (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x470))();
    goto LAB_0024094a;
  }
  FUN_00d50b00();
  FUN_0034ed40();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x460))();
LAB_0024094a:
  FUN_01caeae0();
  plVar2 = local_38;
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_01caeae0();
    FUN_01d66ab0();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return 1;
}


