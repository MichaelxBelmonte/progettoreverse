// Function: FUN_009c9d38
// Address: 009c9d38
// Size: 716 bytes
// Class: Unknown
// String references:
//   "  "
//   "  Caused by..: "


void FUN_009c9d38(locale *param_1,byte *param_2,ulong param_3)

{
  char cVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulong uVar4;
  locale *this;
  void *pvVar5;
  byte *pbVar6;
  longlong unaff_RDI;
  ulong uVar7;
  ulonglong local_78;
  byte local_60;
  byte local_48 [24];
  
  if (*(longlong *)(unaff_RDI + 0x10) != 0) {
    cVar1 = (char)param_3;
    if ((char)param_1 != '\0') {
      std::ios_base::getloc();
      plVar2 = (longlong *)std::locale::use_facet((id *)param_1);
      param_1 = (locale *)*plVar2;
      (**(code **)(param_1 + 0x38))();
      std::locale::~locale(param_1);
      std::ostream::put((char)param_1);
      std::ostream::flush();
    }
    pbVar6 = param_2 + 1;
    FUN_009ad920();
    FUN_009ad920();
    if (cVar1 == '\0') {
      plVar2 = *(longlong **)(unaff_RDI + 0x10);
      FUN_009c8de4();
      pvVar5 = (void *)0x0;
      uVar7 = 1;
      (**(code **)(*plVar2 + 0x60))(0,local_48);
      if ((local_48[0] & 1) != 0) {
        operator_delete(pvVar5);
      }
      plVar2 = *(longlong **)(unaff_RDI + 0x10);
      FUN_009c8de4();
      if ((*param_2 & 1) == 0) {
        uVar4 = (ulong)(*param_2 >> 1);
      }
      else {
        pbVar6 = *(byte **)(param_2 + 0x10);
        uVar4 = (ulong)*(undefined8 *)(param_2 + 8);
      }
      puVar3 = (ulonglong *)std::string::insert(uVar4,(char *)pbVar6,uVar7);
      local_78 = *puVar3;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      pvVar5 = (void *)((longlong)&MACH_HEADER.magic + 1);
      (**(code **)(*plVar2 + 0x28))();
      FUN_009ad920();
    }
    else {
      std::ios_base::getloc();
      plVar2 = (longlong *)std::locale::use_facet((id *)param_1);
      this = (locale *)*plVar2;
      (**(code **)(this + 0x38))();
      std::locale::~locale(this);
      std::ostream::put((char)this);
      std::ostream::flush();
      plVar2 = *(longlong **)(unaff_RDI + 0x10);
      FUN_009c8de4();
      if ((*param_2 & 1) == 0) {
        uVar7 = (ulong)(*param_2 >> 1);
      }
      else {
        pbVar6 = *(byte **)(param_2 + 0x10);
        uVar7 = (ulong)*(undefined8 *)(param_2 + 8);
      }
      puVar3 = (ulonglong *)std::string::insert(uVar7,(char *)pbVar6,param_3);
      local_78 = *puVar3;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      pvVar5 = (void *)0x0;
      (**(code **)(*plVar2 + 0x28))();
      FUN_009ad920();
    }
    if ((local_48[0] & 1) != 0) {
      operator_delete(pvVar5);
    }
    if ((local_78 & 1) != 0) {
      operator_delete(pvVar5);
    }
    if ((local_60 & 1) != 0) {
      operator_delete(pvVar5);
    }
  }
  return;
}


